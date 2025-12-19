#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // good for debugging && bounds check but could loose performance
    if(numbers.at(0) == 1) 
    {
        std::cout << "the number at index 0: " << numbers.at(0) << '\n';
    }

    // no bounds-check but good for performance
    if (numbers[0] == 1) 
    {
        std::cout << "the number at index 0: " << numbers[0] << '\n';
    }
    return 0;
}