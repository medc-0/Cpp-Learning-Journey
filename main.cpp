#include <iostream>

int main(){
    int mana = 50;
    int* manaPtr = &mana;

    std::cout << "The value of mana: " << mana << '\n';
    std::cout << "The address of mana: " << &mana << '\n';
    std::cout << "The address manaPtr holds: " << manaPtr << '\n';
    std::cout << "The value the pointer points to: " << *manaPtr << '\n';
}