#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    numbers.push_back(2);
    numbers.push_back(5);
    numbers.push_back(10);

    std::cout << "Size: " << numbers.size() << " Capacity: " << numbers.capacity() << '\n';
    for (int i : numbers) {
        std::cout << i << ' ';
    }
    return 0;
}