#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // good
    std::cout << numbers.at(0) << '\n';

    // bad
    std::cout << numbers[1] << '\n';
    return 0;
}