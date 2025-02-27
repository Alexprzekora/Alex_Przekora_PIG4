//
// Created by administrator on 2/26/25.
//




void takeTurn();
#include "GameState.h"

GameState::GameState() : score(0), turn(0), game_over(false) {}

int GameState::getscore() const { return score; }
int GameState::getTurn() const { return turn; }
bool GameState::isGameOver() const { return game_over; }

void GameState::incrementTurn() {
    turn++;
}
void GameState::addScore(int turn_score) {
    score += turn_score;
}
void GameState::setGameOver() {
    game_over = true;
}

