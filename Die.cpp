//
// Created by administrator on 2/26/25.
//

#include "Die.h"

#include <cstdlib>
#include <ctime>

Die::Die(int sides) : sides(sides){
    srand(time(NULL));
}

int Die:: roll() const {
    return rand() % sides + 1;
}
