#include <iostream>

int main() {
    int health = 75;
    int* ptrHealth = &health;

    *ptrHealth += 25;
    std::cout << "Address: " << ptrHealth << '\n';
    std::cout << "New Health: " << *ptrHealth << '\n';
    return 0;
}