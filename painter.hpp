#pragma once
#include "board.hpp"

class Painter {
public:
    virtual void DrawBoard(const Board& board) = 0;
    virtual void ShowWinner(Player winner) = 0;
    virtual ~Painter() = default;
};
