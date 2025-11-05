#pragma once
#include "board.hpp"
#include "player.hpp"
#include "painter.hpp"
#include <memory>

class GameEngine {
    std::shared_ptr<Board> _board;
    std::shared_ptr<Painter> _painter;
    Player _currentPlayer;

public:
    GameEngine();
    GameEngine(std::shared_ptr<Painter> painter);

    void Init();
    void Run();
    Player CheckWinner() const;
};
