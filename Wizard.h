#ifndef WIZARD_H
#define WIZARD_H

#include <string>
#include "Character.h"

using namespace std;

class Wizard : public Character {
    private:
        int rank;
    public:
        Wizard(const string &name, double health, double attackStrength, int rank);
        void attack(Character &);
        int getRank();
};

#endif