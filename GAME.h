//
// Created by administrator on 2/19/25.
//
#include "Die.h"
#include "GameState.h"
#ifndef GAME_H
#define GAME_H

class Game {
public:
    Game(int target_score= 20);
    void displayrules() const;
    void takeTurn();
    void playGame();
    void hold(int target_score);


    private:
    GameState game_state;
    Die die;
    int target_score;
    
};



#endif //GAME_H
