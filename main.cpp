#include <iostream>
#include <vector>

using vec1 = std::vector<std::string>;

int main() {
    vec1 names;

    names.push_back("bob");
    names.push_back("sarah");
    names.push_back("damian");
    names.push_back("max");

    std::cout << "Size: " << names.size() << " Capacity: " << names.capacity() << std::endl;

    names.push_back("leon");
    names.push_back("ali");

    for (auto name : names) {
        std::cout << name << " ";
        std::cout << std::endl;
    }

    return 0;
}