#include <iostream>

int main() 
{
    int vec3d[2][2][2] = {
        { 
            {1, 2},
            {3, 4}
        },
        { 
            {5, 6},
            {7, 8}
        }
    };

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            for (int  k = 0; k < 2; k++) 
            {
                std::cout << vec3d[i][j][k] << " ";
            }
            std::cout << '\n';
        }
    }
    return 0;
}