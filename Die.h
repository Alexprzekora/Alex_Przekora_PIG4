//
// Created by administrator on 2/26/25.
//

#ifndef DIE_H
#define DIE_H



class Die {
public:
    Die();
    Die(int sides);
    void roll();
    int get_die_sides() const;
    int get_die_value() const;
    void set_die_sides(int sides);

private:
    int m_sides;
    int m_die_value;
};



#endif //DIE_H
