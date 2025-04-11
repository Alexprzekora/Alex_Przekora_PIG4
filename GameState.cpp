//
// Created by administrator on 2/26/25.
//
using namespace std;
#include <iostream>
#include "GameState.h"
GameState::GameState() : m_turn_score(0), m_turn_over(false){}
void GameState::reset_turn() {
    m_turn_score = 0;
    m_turn_over = false;
}
bool GameState::get_turn_over() {
    return m_turn_over;
}
void GameState::take_turn(const string& player_name, int player_score, int turn_number) {
    reset_turn();
    char choice;
    cout << player_name << " (Score:" << player_score << ") - TURN " << turn_number <<endl;
    while(!m_turn_over) {
        cout << "roll or hold? (r/h): ";
        cin >> choice;
        if(choice == 'r') {
            m_myDie.roll();
            int roll= m_myDie.get_die_value();
            cout << "Die: " << roll << endl;
            if ( roll == 1) {
                cout << "Turn over. No score. \n";
                m_turn_score=0;
                m_turn_over=true;
            }
            else {
                m_turn_score+=roll;
            }
        }else if(choice == 'h') {
            m_turn_over=true;
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }
        cout << "Score for turn: " << m_turn_score << endl;
    }
}
int GameState::get_turn_score() {
    return m_turn_score;
}

