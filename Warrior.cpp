#include <iostream>
#include <string>
#include "Warrior.h"
#include "Elf.h"
#include "Wizard.h"

using namespace std;

Warrior::Warrior(const string &name, double health, double attackStrength, string allegiance) : Character(WARRIOR, name, health, attackStrength) {
    this->allegiance = allegiance;
}

string Warrior::getAllegiance() {
    return allegiance;
}

void Warrior::attack(Character &opponent) {
    if (opponent.getType() == WARRIOR) {
        Warrior &opp = dynamic_cast<Warrior &>(opponent);
        if (opp.getAllegiance() == allegiance) {
            cout << "Warrior " << getName() << " does not attack Warrior " << opponent.getName() << "." << endl
            <<  "They share an allegiance with " << getAllegiance() << "." << endl;
        return;
        }
    }
    double damage = attackStrength * (health / MAX_HEALTH);
    opponent.setHealth(opponent.getHealth() - damage);
    cout << "Warrior " << getName() << " attacks " << opponent.getName() << " --- SLASH!!" << endl
        << opponent.getName() << " takes " << damage << " damage." << endl;
}