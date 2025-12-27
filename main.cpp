#include <iostream>

int main() {
    int stamina = 100;
    int* ptrStamina = &stamina;
    int spentStamina;

    std::cout << "How much stamina spent?: ";
    std::cin >> spentStamina;

    *ptrStamina -= spentStamina;

    if (stamina < 30 && stamina > 1) {
        std::cout << "Take some rest!\n";
    }
    else if (stamina < 0) {
        std::cout << "Youre exhausted\n";
    }
    else {
        std::cout << "You're standing strong!\n";
    }
    return 0;
}