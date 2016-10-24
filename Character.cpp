#include <iostream>
#include "Character.h"

using namespace std;

Character::Character(CharType t, const string &name, double health, double attackStrength) {
    type = t;
    this->name = name;
    this->health = health;
    this->attackStrength = attackStrength;
}

CharType Character::getType() const {
    return type;
}

const string & Character::getName() const {
    return name;
}

/* Returns the whole number of the health value (static_cast to int). */
int Character::getHealth() const {
    return static_cast<int> (health);
}

void Character::setHealth(double h) {
    health = h;
}

bool Character::isAlive() const {
    if (getHealth() > 0) {
        return true;
    }
    else {
        return false;
    }
}