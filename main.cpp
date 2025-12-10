#include <iostream>
#include <vector>
#include <exception>

int main() {
    std::vector<int> v = {1, 2, 3};

    try {
        std::cout << v.at(10) << '\n';
    } catch(std::out_of_range e) {
        std::cout << "Caught: \n\n\n\n\n\n\n\n\n\n\n\n" << e.what();
    }
    return 0;
}
