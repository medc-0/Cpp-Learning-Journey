/*
Exercise 1 – Count occurrences

Given your letters array:

std::string letters[DIMENSIONS][SUBDIMENSIONS] = { {"A", "B", "C", "D", "K", "L"}, {"E", "F", "C", "H", "I", "J"}, {"E", "F", "G", "H", "M", "N"} };

Count how many times "C" appears

Print the result
*/

#include <iostream>

int main() 
{
    constexpr int DIMENSIONS = 3;
    constexpr int SUBDIMENSIONS = 6;
    int countC = 0;
    std::string letters[DIMENSIONS][SUBDIMENSIONS] = { {"A", "B", "C", "D", "K", "L"}, {"E", "F", "C", "H", "I", "J"}, {"E", "F", "C", "H", "M", "N"} };

    // loop through the array
    for (int i = 0; i < DIMENSIONS; i++) 
    {
        for (int j = 0; j < SUBDIMENSIONS; j++) 
        {
            if (letters[i][j] == "C") 
            {
                countC++;
            }
        }
    }

    std::cout << "The amount of C's in the array: " << countC << '\n';
    return 0;
}