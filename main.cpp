#include <iostream>

int main() {
    int potionCount;
    int* potionPtr = &potionCount;

    std::cout << "Enter how many potions you have: ";
    std::cin >> potionCount;

    if (*potionPtr >= 10) {
        std::cout << "Youre well stocked!" << '\n';
        std::cout << *potionPtr << '\n';
    }
    else if (*potionPtr >= 5 && *potionPtr <= 9) {
        std::cout << "Youre running low on potions!" << '\n';
        std::cout << *potionPtr << '\n';
    }
    else {
        std::cout << "Youre out of potions.." << '\n';
        std::cout << *potionPtr << '\n';
    }
    return 0;
}