#include <iostream>

int main() 
{
    int numbers[5];

    for (int i = 0; i < 5; i++) 
    {
        int num;
        std::cout << "Enter number to add: ";
        std::cin >> num;

        numbers[i] = num;
    }

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++) 
    {
        std::cout << numbers[i] << " ";
    }
    return 0;
}