#pragma once
#include "player.hpp"
#include "point.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

class Board {
    std::vector<std::vector<Player>> _grid;
public:
    Board();
    Board(const Board& other);
    Board& operator=(const Board& other);

    bool operator==(const Board& other) const;
    bool operator!=(const Board& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Board& b);
    friend std::istream& operator>>(std::istream& is, Board& b);

    bool PlaceMove(const Point& pos, Player player);
    Player GetCell(const Point& pos) const;
    bool IsFull() const;
};
