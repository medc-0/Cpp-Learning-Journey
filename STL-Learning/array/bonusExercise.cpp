/*
Bonus Exercise – Find longest string in a mulit-dimensional vector

Given this string vector:

std::vector<std::vector<std::string>> w = {{"word", "coding", "cpluplus", "programming"}, {"exercise", "problem-solving", "learning", "practice"}};

Find the longest string in the 2D array.

Print the longest string
*/

#include <iostream>
#include <string>
#include <vector>

int main()
{
    // create a vector inside a vector containing string elements
    std::vector<std::vector<std::string>> w = {{"word", "coding", "cpluplus", "programming"}, {"exercise", "solving", "learning", "practice"}};
    std::string longestWord = w[0][0];

    // loop through the vector and compare the longest string
    // if the condition results in true, assign longestWord to the current longest word.
    for (size_t i = 0; i < w.size(); i++) 
    {
        for (size_t j = 0; j < w[i].size(); j++) 
        {
            if (longestWord.length() < w[i][j].length()) 
                longestWord = w[i][j];
        }
    }
    std::cout << "The longest word is: " << longestWord << '\n';
    return 0;
}