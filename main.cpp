#include <iostream>

int main() {
    int size;
    std::string* words = new std::string[size];

    std::cout << "Enter how many words to enter: ";
    std::cin >> size;

    for (int i = 0; i < size; i++) {
        std::cout << "Enter word " << i + 1 << ": ";
        std::cin >> words[i];
    }

    std::cout << "You entered the following words: ";
    for (int i = 0; i < size; i++) {
        std::cout << words[i] << ", ";
    }
    delete[] words;
    return 0;
}