//
// Created by administrator on 3/19/25.
//

#include "New Game.h"

#include <iostream>

#include "GAME.h"

NewGame::NewGame() {
    display_rules();

    string name;
    cout << "Enter player1' name: ";
    cin>> name;
    m_player[0].set_player_name(name);

    cout << "Enter player2' name: ";
    cin>> name;
    m_player[1].set_player_name(name);
}

void NewGame::play_game() {
    int current_player = 0;
    int turnCount[2] = { 0, 0 };

    while (!get_game_over()) {
        Player& player = m_player[current_player];
        turnCount[current_player]++;

        m_myState.take_turn(player.get_player_name(), player.get_game_score(), turnCount[current_player]);

        int score = player.get_game_score() +m_myState.get_turn_score();
        player.set_game_score(score);

        cout << player.get_player_name() << " 's total score: " << player.get_game_score() << endl << endl;

        if(player.get_game_score() >= 50) {
            cout << "Congratulations " << player.get_player_name() << " you're the winner!" << endl;
            cout << "You had a final score of " << player.get_game_score() << " points after "<< turnCount[current_player] << " turns!" <<endl;
            cout << "THANKS FOR PLAYING!" << endl;
            set_game_over(true);
        }
        current_player = (current_player + 1) % 2;
    }
}

