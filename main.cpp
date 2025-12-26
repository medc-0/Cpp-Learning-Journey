#include <iostream>

void applyDamage(int &playerHealth) {
    int damage;
    std::cout << "How much damage to deal: ";
    std::cin >> damage;

    playerHealth -= damage;
}

int main() {
    int playerHealth;
    std::cout << "Enter health: ";
    std::cin >> playerHealth;

    applyDamage(playerHealth);

    if (playerHealth <= 0) {
        playerHealth = 0;
        std::cout << "You died.\n";
        std::cout << "[DEBUG] health: " << playerHealth << '\n';
    }
    else if (playerHealth <= 30) {
        std::cout << "Low health!\n";
    }
    else {
        std::cout << "You Survived safely.\n";
    }
    return 0;
}