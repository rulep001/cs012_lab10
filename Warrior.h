#ifndef WARRIOR_H
#define WARRIOR_H

#include <string>
#include "Character.h"

using namespace std;

class Warrior : public Character {
    private:
        string allegiance;
    public:
        Warrior(const string &name, double health, double attackStrength, string allegiance);
        void attack(Character &);
        string getAllegiance();
};

#endif