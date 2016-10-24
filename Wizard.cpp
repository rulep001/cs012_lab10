#include <iostream>
#include <string>
#include "Wizard.h"

using namespace std;

Wizard::Wizard(const string &name, double health, double attackStrength, int rank) : Character(WIZARD, name, health, attackStrength) {
    this->rank = rank;
}

int Wizard::getRank() {
    return rank;
}

void Wizard::attack(Character &opponent) {
    if (opponent.getType() == WIZARD) {
        Wizard &opp = dynamic_cast<Wizard &>(opponent);
        double damage = attackStrength * (static_cast<double>(rank) / opp.getRank());
        opp.setHealth(opp.getHealth() - damage);
        cout << "Wizard " << getName() << " attacks " << opponent.getName() << " --- POOF!!" << endl
            << opponent.getName() << " takes " << damage << " damage." << endl;
    }
    else {
        opponent.setHealth(opponent.getHealth() - attackStrength);
        cout << "Wizard " << getName() << " attacks " << opponent.getName() << " --- POOF!!" << endl
            << opponent.getName() << " takes " << attackStrength << " damage." << endl;
    }
}