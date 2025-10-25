#include "Player.h"
#include <iostream>

Player::Player(Map* startMap, int startX, int startY)
    : currentMap(startMap), x(startX), y(startY) {}

void Player::move(int dx, int dy) {
    int newX = x + dx;
    int newY = y + dy;
    if (currentMap->isWalkable(newX, newY)) {
        x = newX;
        y = newY;
        checkTeleport();
    } else {
        std::cout << "Blocked.\n";
    }
}

void Player::checkTeleport() {
    Map* next = currentMap->getNextMap(x, y);
    if (next != nullptr) {
        std::cout << "Teleporting to " << next->getName() << std::endl;
        setMap(next, 0, 0);
    }
}

void Player::setMap(Map* newMap, int newX, int newY) {
    currentMap = newMap;
    x = newX;
    y = newY;
}

void Player::draw() const {
    std::cout << "Player at (" << x << "," << y << ") in " << currentMap->getName() << std::endl;
}
