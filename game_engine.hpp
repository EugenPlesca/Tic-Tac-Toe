#pragma once

#include <memory>
#include "painter.hpp"

class Board;
enum class Player;

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
