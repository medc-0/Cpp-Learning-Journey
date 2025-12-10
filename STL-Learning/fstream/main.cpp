#include <iostream>
#include <fstream>
#include <string>

int main() 
{
    // Writing to a file
    std::ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "Hello, World!\n";
        outfile << "This is a test file.\n";
        outfile.close();
    } else {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Reading from a file
    std::ifstream inFile("example.txt");
    std::string line;
    if (inFile.is_open()) {
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    std::fstream file("text.txt", std::ios::out | std::ios::trunc);
    if (file) {
        file << "this works.\n";
        file << "More plain text.\n";
        file.close();
    } else {
        std::cerr << "Error opening file for writing file." << std::endl;
        // return 1;
        return EXIT_FAILURE;
    }

    std::fstream rFile("text.txt");
    std::string lines;
    if (rFile) {
        while (std::getline(rFile, lines)) {
            std::cout << lines << std::endl;
        }
        rFile.close();
    } else {
        std::cerr << "Error opening file for reading." << std::endl;
        // return 1;
        return EXIT_FAILURE;
    }
    return 0;
}