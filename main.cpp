#include <iostream>

void attack(int damageAmount) {
    std::cout << "You attacked and dealt " << damageAmount << " damage!\n";
}

int main() {
    int damageAmount = 0;

    std::cout << "Enter how much damage to deal: ";
    std::cin >> damageAmount;

    attack(damageAmount);
    return 0;
}