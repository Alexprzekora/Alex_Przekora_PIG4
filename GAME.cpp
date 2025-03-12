//
// Created by administrator on 2/19/25.
//

#include "GAME.h"
#include <iostream>
using namespace std;

Game::Game(int target_score) : target_score(target_score) {}

void Game::displayrules() const {
    cout << "Let's Play PIG Dice!"<< endl;
    cout << "* See how many turns it take you to get to " << target_score << "." << endl;
    cout << "* Turn ends when you hold or roll a 1." << endl;
    cout << "* If you roll a 1, you lose all point for the turn." << endl;
    cout << "* If you hold, you save all points for the turn." << endl;
}
void Game::playGame() {
    displayrules();
    while(!game_state.isGameOver()) {
        game_state.incrementTurn();
        cout << "\nTURN " << game_state.getTurn() << endl;
        takeTurn();
    }
    cout << "You finished with a final score of 20 or more in " << game_state.getTurn() << " turns!" << endl;
}
void Game::takeTurn() {
    int turn_score=0;
    char letter;
    while (true) {
        cout << "roll or hold? (r/h): ";
        cin >> letter;
        if (letter == 'r') {
            int die_roll = die.roll();
            cout << "Die: " << die_roll << endl;
            if ( die_roll == 1) {
                cout << "Turn over. No score. \n";
                return;
            }
            if (die_roll > 1) {
                turn_score += die_roll;
            }
        }
         else if (letter == 'h') {
             hold(turn_score);
             return;
         }else {
             cout << "Invalid choice! Try again." << endl;
         }
        }
    }

void Game::hold(int turn_score) {
    game_state.addScore(turn_score);
    cout << "Score for turn: " << turn_score << endl;
    cout << "Total score: " << game_state.getscore() << endl;
    if (game_state.getscore() > target_score) {
        game_state.setGameOver();
    }
}
