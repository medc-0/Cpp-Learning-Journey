#include <iostream>
#include <vector>
#include <string>

// define a struct weapon
struct Weapon {
    std::string name;
    int damage;
};

int main() {
    // Create 3 weapon variables on the heap
    Weapon* sword = new Weapon{"Sword", 25};
    Weapon* bow = new Weapon{"Bow", 15};
    Weapon* axe = new Weapon{"Axe", 35};

    // Store pointers to the std::vector<Weapon*>
    std::vector<Weapon*> weapons;
    weapons.push_back(sword);
    weapons.push_back(bow);
    weapons.push_back(axe);

    // print all weapons through a for-loop using the pointers
    for (Weapon* w : weapons) {
        std::cout << "Weapon: " << w->name << " | Damage: " << w->damage << '\n';
    }

    // find the weapon sword and increase it damage by +10
    for (Weapon* w : weapons) {
        if (w->name == "Sword") {
            w->damage += 10;
        }
        std::cout << "Weapon: " << w->name << " | Damage: " << w->damage << '\n';
    }

    // clean up vector from heap manually
    for (Weapon*& w : weapons) {
        delete w;
        w = nullptr;
    }
    weapons.clear();
    return 0;
}