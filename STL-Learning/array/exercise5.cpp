/*
Exercise 5 – Flatten array

Given this word array:

std::string words[SIZE_1][SIZE_2] = {{""Hello", "World"}, {"Programming", "Cplusplus"}, {"learning", "coding"}};

Create a 1D array that contains all elements of the 2D array in order.
*/

#include <iostream>
#include <string>

int main() 
{
    constexpr int ROWS = 3;
    constexpr int COLS = 2;
    constexpr int SIZE = ROWS * COLS;

    std::string words[ROWS][COLS] = {
        {"Hello", "World"},
        {"Programming", "Cplusplus"},
        {"learning", "coding"}
    };

    std::string flat[SIZE];
    int index = 0;

    // flatten the array
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            flat[index++] = words[i][j];
        }
    }

    // print 1D array
    for (const auto& word : flat) 
    {
        std::cout << word << '\n';
    }
    return 0;
}