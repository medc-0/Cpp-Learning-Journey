#include <iostream>
#include <ctime>

int main() {

    time_t now = time(nullptr);
    std::cout << "Unix-timestamp: " << now << '\n';

    tm* local = localtime(&now);

    char buffer[50];
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", local);
    std::cout << "Formated Date: " << buffer << "\n";

    time_t passed = now + 10;

    std::cout << "Waiting...\n";
    std::cout << "Enter something:\n";
    std::string dummy;
    std::getline(std::cin, dummy);

   time_t afterInput = time(nullptr);

    if (afterInput > passed) {
        std::cout << "The input was too LATE.\n";
    } else {
        std::cout << "The input was on time.\n";
    }
    return 0;
}
