#include <iostream>

int main() {
    int coins = 100;
    int* ptrCoins = &coins;

    std::cout << "Address: " << ptrCoins << '\n';
    std::cout << "Value: " << *ptrCoins << '\n';
    return 0;
}