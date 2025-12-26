#include <iostream>

void attack(int damageAmount) {
    std::cout << "You attacked and dealt " << damageAmount << " damage!\n";
}

int main() {
    int damageAmount = 0;

    std::cout << "Enter how much damage to deal: ";
    std::cin >> damageAmount;

    if (damageAmount <= 100 && damageAmount >= 1) {
        attack(damageAmount);
    }
    else {
        std::cout << "Invalid amount of damage: max(100)\n";
    }
    return 0;
}