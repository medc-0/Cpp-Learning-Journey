/*
Exercise 2 – Find longest string

Given this string array:

std::string w[2][4] = {{"word", "coding", "cpluplus", "programming"}, {"exercise", "problem-solving", "learning", "practice"}};

Find the longest string in the 2D array.

Print the longest string
*/

#include <iostream>

int main()
{
    std::string w[2][4] = {{"word", "coding", "cpluplus", "programming"}, {"exercise", "solving", "learning", "practice"}};
    std::string longestWord = w[0][0];

    // loop through the array and check if the last word was longer than the current one.
    // asign it to the longestWord variable if the condition results true
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (longestWord.length() < w[i][j].length()) 
            {
                longestWord = w[i][j];
            }
        }
    }
    std::cout << "The longest word: " << longestWord << '\n';
    return 0;
}