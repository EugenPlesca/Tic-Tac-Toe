#include "board.hpp"

Board::Board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            _grid[i][j] = Player::None;
        }
    }
}

bool Board::PlaceMove(const Point& pos, Player player) {
    if (pos.x < 0 || pos.x >= 3 || pos.y < 0 || pos.y >= 3)
        return false;
    if (_grid[pos.x][pos.y] != Player::None)
        return false;

    _grid[pos.x][pos.y] = player;
    return true;
}

Player Board::GetCell(const Point& pos) const {
    if (pos.x < 0 || pos.x >= 3 || pos.y < 0 || pos.y >= 3)
        return Player::None;
    return _grid[pos.x][pos.y];
}

bool Board::IsFull() const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (_grid[i][j] == Player::None)
                return false;
        }
    }
    return true;
}
