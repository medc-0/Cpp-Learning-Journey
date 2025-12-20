#include <iostream>

int main() 
{
    double pi = 3.14;
    pi = static_cast<int>(pi);

    std::cout << "pi casted: " << pi << '\n';
    return 0;
}