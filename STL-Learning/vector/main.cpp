#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // good for debugging && bounds check but could loose performance
    for (int i = 0; i < numbers.size(); ++i) 
    {
        std::cout << numbers.at(i) << ' ';
    }
    std::cout << '\n';

    // no bounds-check but good for performance
    for (int i = 0; i < numbers.size(); ++i) 
    {
        std::cout << numbers[i] << ' ';
    }
    return 0;
}