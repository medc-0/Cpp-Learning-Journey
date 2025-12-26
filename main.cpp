#include <iostream>

int increaseHealth(int &health) {
    return health += 20;
}

int main() {
    int health = 0;
    std::cout << "Enter current Health: ";
    std::cin >> health;

    increaseHealth(health);

    std::cout << "Updated Health: " << health;
    return 0;
}