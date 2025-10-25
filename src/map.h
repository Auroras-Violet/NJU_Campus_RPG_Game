#include <vector>
#include <string>
#include <iostream>
#include "MapPoint.h"

class Map {
private:
    std::string name;
    int width, height;
    std::vector<std::vector<MapPoint>> grid;

public:
    Map(const std::string& name, int w, int h);

    const std::string& getName() const { return name; }
    void setPoint(int x, int y, bool isBarrier, Map* nextMap = nullptr);
    bool isWalkable(int x, int y) const;
    Map* getNextMap(int x, int y) const;
    void draw() const;
};
