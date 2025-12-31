#include <iostream>

struct Character {
    std::string name;
    int speed;
    int health;
    double attackDamage;
    bool isAlive = true;

    Character(const std::string& n, int s, int h, double attackDamage, bool isAlive)
    : name(n), speed(s), health(h), attackDamage(attackDamage), isAlive(isAlive) {}

    void printStats() const {
        std::cout << "Name: " << name << '\n'
                  << "HP: " << health << '\n'
                  << "DMG: " << attackDamage << '\n';
    }

    void attackEntity(Character& other) {
        other.health -= attackDamage;
    }
};
struct Entity : Character {
    using Character::Character;
};

struct Player : Character {
    using Character::Character;
};

int main() {
    Entity e("Orc", 2, 150, 10.0, true);
    Player p("Bob", 4, 100, 5.0, true);
    
    std::cout << e.name << " - ***Stats***\n";
    e.printStats();

    std::cout << "The " << e.name << " is attacking " << p.name << " with a mace!\n";
    e.attackEntity(p);

    std::cout << p.name << " took damage and now players stats: \n";
    p.printStats();

    std::cout << p.name << " is attacking " << e.name << " with a Fire Sword!\n";
    e.attackEntity(e);
    
    std::cout << "The " << e.name << " took damage and now enemies stats: \n";
    e.printStats();
    return 0;
}