#include <iostream>
#include <fstream>
#include <string>

bool writeFile() 
{
    //Write to a file
    std::ofstream outfile("example.txt");
    if (outfile) 
    {
        outfile << "text1\n";
        outfile << "text2\n";
    }
    else
    {
        std::cerr << "Error cannot open file\n";
        return false;
    }
    return true;
}

bool readFile()
{
    // read a file
    std::ifstream inFile("example.txt");
    if (inFile)
    {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line;
        }
    }
    else 
    {
        std::cerr << "Error reading file\n";
        return false;
    }
    return true;
}

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

    std::fstream file("text.txt", std::ios::out | std::ios::trunc);
    if (file) {
        file << "this works.\n";
        file << "More plain text.\n";
        file.close();
    } else {
        std::cerr << "Error opening file for writing file." << std::endl;
        return 1;
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
        return 1;
    }
    
    bool result = writeFile();

    if (result)
    {
        std::cout << "it worked fine writing to file..\n";
    }
    else 
    {
        std::cout << "Error trying to write to file, \n";
        return 1;
        // or return EXIT_FAILURE;
    }

    bool result2 = readFile();
    
    if (result2)
    {
        std::cout << "it worked fine reading the file..\n";
    }
    else 
    {
        std::cout << "it did not work to read the file..\n";
        return 1;
        // or return EXIT_FAILURE;
    }

    // fstream with exception handling
    

    return 0;
}