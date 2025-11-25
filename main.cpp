#include <iostream>

int main() {

    std::string name;

    std::cout << "Enter your name: ";
    while(name.empty()) {
        std::getline(std::cin >> std::ws, name);
    }
    std::cout << "your name: " << name << '\n';

    return 0;
}