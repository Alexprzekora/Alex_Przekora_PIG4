//
// Created by administrator on 2/19/25.
//

#include "GAME.h"
#include <iostream>
using namespace std;

Game::Game() : m_game_score(0), m_game_over(false) {}

void Game::display_rules() {
    cout << "Let's Play PIG Dice!"<< endl;
    cout << "* See which player will reach 50 points in the fewest turns." << endl;
    cout << "* Turn ends when you hold or roll a 1." << endl;
    cout << "* If you roll a 1, you lose all point for the turn." << endl;
    cout << "* If you hold, you save all points for the turn." << endl;
}
void Game::reset_game_score() {
    m_game_score = 0;
}
int Game::get_game_score() {
    return m_game_score;
}
void Game::set_game_over(bool status) {
    m_game_over = status;
}
bool Game::get_game_over() {
    return m_game_over;
}

