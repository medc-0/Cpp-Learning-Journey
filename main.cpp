#include <iostream>
// #include <vector>
#include <string>

int main() 
{   
    std::string word;

    std::cout << "Enter a word: ";
    std::getline(std::cin, word);

    for (int i = word.length() -1; i < word.length(); i--)
    {
        std::cout << word[i];
    }
    std::cout << '\n';
    return 0;
}