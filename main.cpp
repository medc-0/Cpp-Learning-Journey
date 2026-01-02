#include <iostream>

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

auto main() -> int {
    std::cout << "Recursive: " << factorial(5) << '\n';
    return 0;
}