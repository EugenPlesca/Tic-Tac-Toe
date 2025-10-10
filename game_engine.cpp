#include "game_engine.hpp"
#include <iostream>

GameEngine::GameEngine()
    : _currentPlayer(Player::X)
{
}

void GameEngine::Init() {
    _board = Board();
    _currentPlayer = Player::X;
}

void GameEngine::Run() {
    Init();
    while (true) {
        int x, y;
        std::cout << "Player " << (_currentPlayer == Player::X ? "X" : "O") << ", enter coordinates (x y): ";
        std::cin >> x >> y;

        Point pos{x, y};
        if (!_board.PlaceMove(pos, _currentPlayer)) {
            std::cout << "Invalid move, try again.\n";
            continue;
        }

        Player winner = CheckWinner();
        if (winner != Player::None) {
            std::cout << "Player " << (winner == Player::X ? "X" : "O") << " wins!\n";
            break;
        }

        if (_board.IsFull()) {
            std::cout << "It's a draw!\n";
            break;
        }

        _currentPlayer = (_currentPlayer == Player::X) ? Player::O : Player::X;
    }
}

Player GameEngine::CheckWinner() const {
    for (int i = 0; i < 3; i++) {
        if (_board.GetCell({i, 0}) != Player::None &&
            _board.GetCell({i, 0}) == _board.GetCell({i, 1}) &&
            _board.GetCell({i, 1}) == _board.GetCell({i, 2}))
            return _board.GetCell({i, 0});

        if (_board.GetCell({0, i}) != Player::None &&
            _board.GetCell({0, i}) == _board.GetCell({1, i}) &&
            _board.GetCell({1, i}) == _board.GetCell({2, i}))
            return _board.GetCell({0, i});
    }

    if (_board.GetCell({0, 0}) != Player::None &&
        _board.GetCell({0, 0}) == _board.GetCell({1, 1}) &&
        _board.GetCell({1, 1}) == _board.GetCell({2, 2}))
        return _board.GetCell({0, 0});

    if (_board.GetCell({0, 2}) != Player::None &&
        _board.GetCell({0, 2}) == _board.GetCell({1, 1}) &&
        _board.GetCell({1, 1}) == _board.GetCell({2, 0}))
        return _board.GetCell({0, 2});

    return Player::None;
}
