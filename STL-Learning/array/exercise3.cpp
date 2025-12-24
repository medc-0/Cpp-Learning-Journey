/*
Exercise 3 – Replace values

Given your letters array:

std::string letters[OUTER][INNER] = { {"A", "B", "C", "D", "E", "L"}, {"E", "F", "G", "H", "I", "J"}, {"O", "K", "E", "P", "M", "N"} };

Replace every "E" with "X" and print the array.

Print the modified array
*/

#include <iostream>

int main() 
{
    constexpr int OUTER = 3;
    constexpr int INNER = 6;

    std::string letters[OUTER][INNER] = { {"A", "B", "C", "D", "E", "L"}, {"E", "F", "G", "H", "I", "J"}, {"O", "K", "E", "P", "M", "N"} };

    // loop through the array, replacae every "E" with "X"
    for (int i = 0; i < OUTER; i++) 
    {
        for (int j = 0; j < INNER; j++) 
        {
            if (letters[i][j] == "E") 
            {
                letters[i][j] = "X";
            }
        }
    }
    
    for (int i = 0; i < OUTER; i++) 
    {
        for (int j = 0; j < INNER; j++) 
        {
            std::cout << letters[i][j] << " ";
        }
        std::cout << '\n';
    } 
    return 0;
}