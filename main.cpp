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

    void attackPlayer() {

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

    void attackEntity() {

    }
};

int main() {
    Entity e("Orc", 2, 150, 10.0);
    e.printStats();
    e.attackPlayer();

    Player p("Bob", 4, 100, 5.0);
    p.printPlayerStats();
    p.attackEntity();
    return 0;
}