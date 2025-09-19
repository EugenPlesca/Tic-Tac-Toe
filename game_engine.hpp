#pragma once
#include "board.hpp"
#include "player.hpp"

class GameEngine {
    Board _board;
    Player _currentPlayer;
public:
    GameEngine();
    void Init();
    void Run();
    Player CheckWinner() const;
};
