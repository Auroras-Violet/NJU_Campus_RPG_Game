
#include <iostream>
#include <string>
#include "Map.h"
using namespace std;
class Player {
private:
    int x, y;
    Map* currentMap;

public:
    Player(Map* startMap, int startX, int startY);
    void move(int dx, int dy);
    void checkTeleport();
    void setMap(Map* newMap, int newX, int newY);
    void draw() const;
};