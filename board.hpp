#pragma once
#include "player.hpp"
#include "point.hpp"

class Board {
    Player _grid[3][3];
public:
    Board();
    bool PlaceMove(const Point& pos, Player player);
    Player GetCell(const Point& pos) const;
    bool IsFull() const;
};
