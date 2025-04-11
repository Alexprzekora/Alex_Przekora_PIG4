//
// Created by administrator on 2/26/25.
//

#ifndef GAMESTATE_H
#define GAMESTATE_H
#include <string>

#include "Die.h"


class GameState {
public:
    GameState();

    void reset_turn();
    bool get_turn_over();
    void take_turn(const std::string& player_name, int player_score, int turn_number);
    int get_turn_score();

private:
    char m_choice;
    int m_turn_score;
    bool m_turn_over;
    Die m_myDie;

};



#endif //GAMESTATE_H
