#pragma once
#include "board.hpp"
#include <iostream>

class Painter {
public:
    virtual void DrawBoard(const Board& board) = 0;
    virtual void ShowWinner(Player winner) = 0;
    virtual ~Painter() = default;
};

class ConsolePainter : public Painter {
public:
    void DrawBoard(const Board& board) override;
    void ShowWinner(Player winner) override;
};
