#include <iostream>

int steps(int n) {
    if (n == 1) {
        return 1;
    }
    std::cout << "Step: " << n << '\n';
    return steps(n - 1);
}

int main() {
    std::cout << steps(100) << '\n';
    return 0;
}