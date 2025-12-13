#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() 
{
    std::string filename;
    std::string line;

    int lineCount = 0;
    int charCount = 0;
    int wordCount = 0;

    std::cout << "Enter file name: ";
    std::cin >> filename;

    std::ifstream file(filename);

    if (!file.is_open()) 
    {
        std::cerr << "Error opening file.\n";
        return 1;
    }

    while (std::getline(file, line)) 
    {
        lineCount++;
        charCount += line.length();

        std::stringstream ss(line);
        std::string word;

        while (ss >> word) {
            wordCount++;
        }
    }
    file.close();

    std::cout << "\n--- File Analysis ---\n";
    std::cout << "Lines: " << lineCount << '\n';
    std::cout << "Words: " << wordCount << '\n';
    std::cout << "Characters: " << charCount << '\n';
    return 0;
}