//
// Created by administrator on 2/19/25.
//
#include "Die.h"
#include "GameState.h"
#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game();
    void reset_game_score();
    int get_game_score();
    void set_game_over(bool status);
    bool get_game_over();
    void display_rules();
    virtual void play_game() = 0;


    protected:
    int m_game_score;
    bool m_game_over;
    
};



#endif //GAME_H
