#include <iostream>
#include <vector>

int findMax(const std::vector<int>& vec) 
{
    int largestValue = vec[0];
    for (int val : vec) 
    {
        if (val > largestValue)
            largestValue = val;
    }
    return largestValue;
}

int main() 
{   
    // Initialize vector
    std::vector<int> vec = {
        423, 435, 653, 230, 843, 724
    };

    // Get the largest number inside the vector
    int largestVal = findMax(vec);   
    std::cout << "Largest value inside the vector: " << largestVal << '\n';
    return 0;
}