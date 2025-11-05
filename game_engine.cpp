#include "game_engine.hpp"
#include "point.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

GameEngine::GameEngine()
    : _board(std::make_shared<Board>()), _painter(nullptr), _currentPlayer(Player::X) {}

GameEngine::GameEngine(std::shared_ptr<Painter> painter)
    : _board(std::make_shared<Board>()), _painter(painter), _currentPlayer(Player::X) {}

void GameEngine::Init() {
    _board = std::make_shared<Board>();
    _currentPlayer = Player::X;
}

void GameEngine::Run() {
    Init();
    std::ofstream log("game_log.txt", std::ios::app);
    int lines[3] = {0, 1, 2};

    while (true) {
        if (_painter) _painter->DrawBoard(*_board);

        int x, y;
        std::cout << "Player " << (_currentPlayer==Player::X?"X":"O") << ", enter coordinates (x y): ";
        std::cin >> x >> y;

        Point pos{x,y};
        if (!_board->PlaceMove(pos,_currentPlayer)) continue;

        log << "Player " << (_currentPlayer==Player::X?"X":"O") << " -> (" << x << "," << y << ")\n";

        Player winner = CheckWinner();
        if (winner != Player::None) {
            if (_painter) _painter->DrawBoard(*_board);
            if (_painter) _painter->ShowWinner(winner);
            log << "Winner: Player " << (winner==Player::X?"X":"O") << "\n\n";
            break;
        }

        if (_board->IsFull()) {
            if (_painter) _painter->DrawBoard(*_board);
            if (_painter) _painter->ShowWinner(Player::None);
            log << "Result: Draw\n\n";
            break;
        }

        _currentPlayer = (_currentPlayer==Player::X?Player::O:Player::X);
    }

    log.close();
}

Player GameEngine::CheckWinner() const {
    int lines[3] = {0,1,2};
    for (int i = 0; i < 3; ++i) {
        if (_board->GetCell({i,0}) != Player::None &&
            std::all_of(std::begin(lines), std::end(lines), [&](int j){ return _board->GetCell({i,j}) == _board->GetCell({i,0}); }))
            return _board->GetCell({i,0});

        if (_board->GetCell({0,i}) != Player::None &&
            std::all_of(std::begin(lines), std::end(lines), [&](int j){ return _board->GetCell({j,i}) == _board->GetCell({0,i}); }))
            return _board->GetCell({0,i});
    }

    if (_board->GetCell({0,0}) != Player::None &&
        _board->GetCell({0,0}) == _board->GetCell({1,1}) &&
        _board->GetCell({1,1}) == _board->GetCell({2,2}))
        return _board->GetCell({0,0});

    if (_board->GetCell({0,2}) != Player::None &&
        _board->GetCell({0,2}) == _board->GetCell({1,1}) &&
        _board->GetCell({1,1}) == _board->GetCell({2,0}))
        return _board->GetCell({0,2});

    return Player::None;
}
