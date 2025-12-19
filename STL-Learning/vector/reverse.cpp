#include <iostream>
#include <vector>

int main() 
{
    // Initialize Vector
    std::vector<int> vec;

    // push values inside vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // output reversed vector
    for (int i = static_cast<int>(vec.size()) -1; i >= 0; --i) 
    {
        std::cout << vec[i] << " ";
    }
    std::cout << '\n';

    // reversing with iterators
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) 
    {
        std::cout << *it << ' ';
    }

    return 0;
}