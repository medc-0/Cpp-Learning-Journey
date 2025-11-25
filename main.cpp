#include <iostream>

int main() {

    int number;
    std::cout << "Enter a number: ";
    while (!(std::cin >> number)) {
        std::cout << "Invalid number!\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }
    std::cout << "You entered: " << number; 


    return 0;
}