#include <iostream>
#include <string>
#include <vector>
#include <fstream>

void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// load map
std::vector<std::string> loadMap(
    const std::string& filename,
    int& playerX,
    int& playerY
)
{
    std::vector<std::string> map;
    std::ifstream file(filename);
    
    if (!file.is_open()) 
    {
        std::cout << "[INFO] map.txt not found. Loading default map.\n";

        map = {
            "############################",
            "#..........................#",
            "#..........................#",
            "#..........................#",
            "#..........................#",
            "############################"
        };

        playerX = 2;
        playerY = 2;
        return map;
    }

    std::cout << "[INFO] loaded map from file\n";

    std::string line;
    int y = 0;

    while (std::getline(file, line)) 
    {
        size_t pos = line.find("@");
        if (pos != std::string::npos) 
        {
            playerX = static_cast<int>(pos);
            playerY = y;
            line[pos] = '.';
        }

        map.push_back(line);
        y++;
    }

    file.close();
    return map;
}

// draw
void draw(
    const std::vector<std::string>& map,
    int playerX,
    int playerY
)
{
    for (int y = 0; y < map.size(); y++) 
    {
        for (int x = 0; x < map[y].size(); x++) 
        {
            if (x == playerX && y == playerY)
                std::cout << "@";
            else
                std::cout << map[y][x];
        }
        std::cout << '\n';
    }
}