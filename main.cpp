#include <iostream>
#include <vector>

int main() 
{
    std::vector<int> data = {
        96, 73, 53, 76, 99, 12, 89, 82
    };
    
    for (auto datas : data) 
    {
        std::cout << datas << " ";
    }
    std::cout << '\n';

    int first = data.front();
    int last = data.back();

    if (first > 75) 
    {
        if (last % 2 == 0 && data.size() >= 8) 
        {
            std::cout << "strong front vector and strong back vector." << '\n';
        }
        else if (last % 2 != 0 || data.size() < 8) 
        {
            std::cout << "strong front but not a good back vector." << '\n';
        }
        else  
        {
            std::cout << "unknown back but good front!" << '\n';
        }
    }
    else 
    {
        std::cout << "not a good start!" << '\n';
    }

    int counter = 0;
    for (int i = 0; i < data.size(); i++) 
    {
        if (data[i] % 2 == 0) 
        {
            counter++;
            if (counter >= data.size()/2) 
            {
                std::cout << "Majority even" << '\n';
            }
            else {
                std::cout << "majority not even" << '\n';
            }
        }
        if (data[i] == 77) 
        {
            std::cout << "found 77\n";
        }
        else 
        {
            std::cout << "no 77 was found\n";
        }
    }

    data.push_back(100);
    data.insert(data.begin() + 2, 42);
    data.erase(data.begin() + 2);

    return 0;
}