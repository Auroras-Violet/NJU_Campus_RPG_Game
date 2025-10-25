#include "Map.h"

Map::Map(const std::string& n, int w, int h)
    : name(n), width(w), height(h), grid(h, std::vector<MapPoint>(w)) {
    for (int j = 0; j < h; ++j)
        for (int i = 0; i < w; ++i)
            grid[j][i] = MapPoint(i, j, false, nullptr);
}

void Map::setPoint(int x, int y, bool isBarrier, Map* nextMap) {
    grid[y][x].isBarrier = isBarrier;
    grid[y][x].nextMap = nextMap;
}

bool Map::isWalkable(int x, int y) const {
    return !grid[y][x].isBarrier;
}

Map* Map::getNextMap(int x, int y) const {
    return grid[y][x].nextMap;
}

void Map::draw() const {
    std::cout << "Map: " << name << std::endl;
    for (int j = 0; j < height; ++j) {
        for (int i = 0; i < width; ++i) {
            if (grid[j][i].isBarrier)
                std::cout << "#";
            else if (grid[j][i].nextMap != nullptr)
                std::cout << "T";  // teleport 门
            else
                std::cout << ".";
        }
        std::cout << std::endl;
    }
}