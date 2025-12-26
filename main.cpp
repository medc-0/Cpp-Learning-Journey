#include <iostream>

int health = 100;

int attack(int);

int main() {
    std::cout << "Doing damage!\n";
    attack(50);
    std::cout << "Health: " << health;
}

int attack(int damage) {
    health -= damage;
    return health;
}