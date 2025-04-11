
//
// Created by administrator on 3/19/25.
//
using namespace std;
#include <string>
#ifndef PLAYER_H
#define PLAYER_H


class Player {
    public:
    Player(string name = "Player");
    void set_player_name(string name);
    string get_player_name();
    void set_game_score(int score);
    int get_game_score();

    private:
    int m_game_score;
    string m_name;
};


#endif //PLAYER_H
