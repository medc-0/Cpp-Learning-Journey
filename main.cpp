#include <iostream>

int main(){
    int health = 100;
    int* ptrhealth = &health;

    std::cout << "Health: " << health << '\n';
    std::cout << "Address of health: " << &health << '\n';
    std::cout << "Pointer holds: " << ptrhealth << '\n';
    std::cout << "Pointers points to value: " << *ptrhealth << '\n';
    return 0;
}