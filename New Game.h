//
// Created by administrator on 3/19/25.
//

#ifndef NEW_GAME_H
#define NEW_GAME_H
#include "GAME.h"
#include "Player.h"
#include "GameState.h"
#endif //NEW_GAME_H


class NewGame : public Game {
    public:
    NewGame();
    void play_game() override;

    private:
    Player m_player[2];
    GameState m_myState;
    bool m_player_toggle;


};