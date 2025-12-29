#include <iostream>

int main()
{
    int potions[5] = {
        2, 5, 0, 10, 7
    };
    std::string potNames[5] = {
        "Health", "Mana", "Stamina", "Strength", "Speed"
    };
    int* firstPot = potions;
    std::string* firstPotN = potNames;

    for (int i = 0; i < 5; i++) {
        std::cout << "Potion Name: " << *(firstPotN + i) << " | Potion Amount: " << *(firstPot + i) << '\n';
        *(firstPot + i) += 3; // increase all potions counts by 3
    }
    std::cout << "**** After modifications ****\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Potion Name: " << *(firstPotN + i) << " | Potion Amount: " << *(firstPot + i) << '\n';
    }
    return 0;
}