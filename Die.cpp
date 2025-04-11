//
// Created by administrator on 2/26/25.
//

#include "Die.h"

#include <cstdlib>
#include <ctime>

Die::Die() : m_sides(6), m_die_value(1){}

Die::Die(int sides) : m_sides(sides), m_die_value(1){}

void Die::roll() {
    srand(time(NULL));
    m_die_value= rand() % m_sides + 1;
}
int Die::get_die_sides() const {
    return m_sides;
}
int Die::get_die_value() const {
    return m_die_value;
}
void Die::set_die_sides(int sides) {
    if (sides > 0) {
        m_sides = sides;
    }
}