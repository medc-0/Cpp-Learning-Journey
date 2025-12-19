#include <iostream>
#include <vector>

int sumVec(const std::vector<int>& vec) 
{   
    int sum = 0;
    for (auto& num : vec) 
    {
        sum += num;
    }
    return sum;
}

int main() 
{   
    // Create Vector
    std::vector<int> vec;

    // Add values inside vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    // get the sum of the vector
    int sumOfVector = sumVec(vec);
    std::cout << "Sum of the vector: " << sumOfVector << '\n';
    return 0;
}