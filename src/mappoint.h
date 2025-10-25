#include <iostream>

using namespace std;

class Map; // 前向声明

struct MapPoint {
    int x, y;
    bool isBarrier;    // true 表示墙
    Map* nextMap;      // 若非 nullptr 表示传送门

    MapPoint(int x=0, int y=0, bool barrier=false, Map* next=nullptr)
        : x(x), y(y), isBarrier(barrier), nextMap(next) {}
};