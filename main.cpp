#include <iostream>

int main()
{
    int dayNum;

    std::cout << "Enter a day (1-7): ";
    std::cin >> dayNum;

    switch(dayNum) 
    {
        case 1:
            std::cout << "It is monday!\n";
            break;
        case 2:
            std::cout << "It is tuesday!\n";
            break;
        case 3:
            std::cout << "It is wednesday!\n";
            break;
        case 4:
            std::cout << "It is thursday!\n";
            break;
        case 5:
            std::cout << "It is friday!\n";
            break;
        case 6:
            std::cout << "It is saturday\n";
            break;
        case 7:
            std::cout << "It is sunday!\n";
            break;
        default:
            std::cout << "Invalid day!\n";
            break;
    }
    return 0;
}