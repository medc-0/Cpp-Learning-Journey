#include <iostream>

void boostHealth(int& health) {
    health += 50;
}

int main() {
    int playerHealth = 100;

    std::cout << "player health: " << playerHealth << '\n';
    boostHealth(playerHealth);

    std::cout << "player Health after: " << playerHealth << '\n';
    return 0;
}