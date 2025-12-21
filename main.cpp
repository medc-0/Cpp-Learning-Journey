#include <iostream>

int main() 
{
    int numbers[10];

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter a number to add: ";
        std::cin >> numbers[i];
    }

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
    {   
        if (numbers[i] % 2 == 0) 
        {
            std::cout << numbers[i] << " ";
        }
    }
    return 0;
}