#include <iostream>
#include <fstream>
#include <string>

int main() {
    /* Basic introduction to filestreams in C++ */
    // Create and open file
    std::ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "File operations can be complex, but fun.\n";

    // Close the file
    MyFile.close();

    // Create a text string, which is used to output the text file
    std::string MyLine;

    // Read from the text file
    std::ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (std::getline(MyReadFile, MyLine)) {
        std::cout << MyLine << std::endl;
    }

    // Close the file
    MyReadFile.close();


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


    
    return 0;
}