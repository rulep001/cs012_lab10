#include <iostream>
#include <string>
#include "Elf.h"

using namespace std;

Elf::Elf(const string &name, double health, double attackStrength, string familyName) : Character(ELF, name, health, attackStrength) {
    this->familyName = familyName;
}

string Elf::getFamilyName() {
    return familyName;
}

void Elf::attack(Character &opponent) {
    if (opponent.getType() == ELF) {
        Elf &opposite = dynamic_cast<Elf &>(opponent);
        if (opposite.getFamilyName() == familyName) {
            cout << "Elf " << getName() << " does not attack Elf " << opponent.getName() << "." << endl
                <<  "They are both members of the " << getFamilyName() << " family." << endl;
            return;
        }
    }
    double damage = attackStrength * (health / MAX_HEALTH);
    opponent.setHealth(opponent.getHealth() - damage);
    cout << "Elf " << getName() << " shoots an arrow at " << opponent.getName() << " --- TWANG!!"
        << endl << opponent.getName() << " takes " << damage << " damage." << endl;
}