#include <iostream>

int main() 
{
    const int DIMENSIONS = 3;
    const int SUBDIMENSIONS = 6;
    std::string letters[DIMENSIONS][SUBDIMENSIONS] = {
        {"A", "B", "C", "D", "K", "L"},
        {"E", "F", "C", "H", "I", "J"},
        {"E", "F", "G", "H", "M", "N"}
    };

    for (int i = 0; i < DIMENSIONS; i++) 
    {
        for (int j = 0; j < SUBDIMENSIONS; j++) 
        {
            std::cout << letters[i][j] << " ";
        }
        std::cout << '\n';
    }
    return 0;
}