#include <iostream>

int main()
{
    int potions[5] = {
        2, 5, 0, 10, 7};
    int *firstPot = potions; // first index

    for (int i = 0; i < 5; i++)
    {
        std::cout << "number: " << *(firstPot + i) << '\n';
    }

    *(firstPot + 1) += 3;
    *(firstPot + 4) -= 2;

    std::cout << "******** After Modification ********\n";
    for (int i = 0; i < 5; i++)
    {
        std::cout << "number: " << *(firstPot + i) << '\n';
    }
    return 0;
}