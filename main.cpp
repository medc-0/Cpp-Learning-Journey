#include <iostream>

int main() 
{
    char grade;
    
    std::cout << "Enter a grade char: ";
    std::cin >> grade;

    switch(grade) 
    {
        case 'A':
        case 'a':
            std::cout << "Excellent A!\n";
            break;
        case 'B':
        case 'b':
            std::cout << "Good B!\n";
            break;
        case 'C':
        case 'c':
            std::cout << "Average C!\n";
            break;
        case 'D':
        case 'd':
            std::cout << "Poor D!\n";
            break;
        case 'F':
        case 'f':
            std::cout << "Fail F!" << "\n";
            break;
        default:
            std::cout << "Enter a valid grade!";
            break;
    }
    return 0;
}