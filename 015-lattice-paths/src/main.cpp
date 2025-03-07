#include <iostream>
#include <stdint.h>
#include <unordered_map>

std::unordered_map<uint16_t, uint64_t> discovered_paths;

uint64_t count_paths(uint8_t x, uint8_t y);

int main()
{
    uint64_t solution = count_paths(0, 0);
    std::cout << "Solution: " << solution << "\n";
    return 0;
}

uint64_t count_paths(uint8_t x, uint8_t y)
{
    uint64_t coordinates = (x << 8) + y;

    if (discovered_paths.find(coordinates) != discovered_paths.end())
    {
        return discovered_paths[coordinates];
    }

    else if (x == 20 && y == 20)
    { return 1; }

    else if (x == 20)
    {
        discovered_paths[coordinates] = count_paths(x, y + 1);
        return discovered_paths[coordinates];
    }

    else if (y == 20)
    {
        discovered_paths[coordinates] = count_paths(x + 1, y);
        return discovered_paths[coordinates];
    }

    else
    {
        discovered_paths[coordinates] = count_paths(x + 1, y) + count_paths(x, y + 1);
        return discovered_paths[coordinates];
    }
}
