//
// Created by administrator on 3/19/25.
//

#include "Player.h"

Player::Player(string name) : m_name(name), m_game_score(0) {}



int Player::get_game_score(){
    return m_game_score;
}
void Player::set_game_score(int game_score) {
    m_game_score = game_score;
}

void Player::set_player_name(string name) {
    m_name = name;
}
string Player::get_player_name() {
    return m_name;
}




