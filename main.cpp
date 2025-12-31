#include <iostream>

struct Entity {
    std::string name;
    int speed;
    int health;
    double attackDamage;

    Entity(const std::string& n, int s, int h, double attackDamage)
    : name(n), speed(s), health(h), attackDamage(attackDamage) {}

    void printStats() const {
        std::cout << "Name: " << name << '\n' << "Speed: " << speed << 
        '\n' << "Health: " << health << '\n' << "Attack Damage: " << attackDamage << '\n';
    }

    void attackPlayer(int& health) {
        health -= attackDamage;
    }
};

struct Player {
    std::string name;
    int speed;
    int health;
    double attackDamage;

    Player(const std::string& n, int s, int h, double attackDamage)
    : name(n), speed(s), health(h), attackDamage(attackDamage) {}

    void printPlayerStats() const {
        std::cout << "Name: " << name << '\n' << "Speed: " << speed <<
        '\n' << "Health: " << health << '\n' << "Attack Damage: " << attackDamage << '\n';
    }

    void attackEntity(int& health) {
        health -= attackDamage;
    }
};

int main() {
    Entity e("Orc", 2, 150, 10.0);
    Player p("Bob", 4, 100, 5.0);
    
    std::cout << e.name << " - ***Stats***\n";
    e.printStats();

    std::cout << "The " << e.name << " is attacking " << p.name << " with a mace!\n";
    e.attackPlayer(p.health);

    std::cout << p.name << " took damage and now players stats: \n";
    p.printPlayerStats();

    std::cout << p.name << " is attacking " << e.name << " with a Fire Sword!\n";
    e.attackPlayer(e.health);
    
    std::cout << "The " << e.name << " took damage and now enemies stats: \n";
    e.printStats();
    return 0;
}