#include <iostream>

int main() {
    int mana = 50;
    int spent;
    int* ptrMana = &mana;

    std::cout << "How much mana to spend?: ";
    std::cin >> spent;

    *ptrMana -= spent;

    if (*ptrMana <= 0) {
        std::cout << "Out of mana!";
    }
    else {
        std::cout << *ptrMana << '\n';
    }
    return 0;
}