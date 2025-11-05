#include "board.hpp"

Board::Board() : _grid(3, std::vector<Player>(3, Player::None)) {}

Board::Board(const Board& other) : _grid(other._grid) {}

Board& Board::operator=(const Board& other) {
    if (this != &other) {
        _grid = other._grid;
    }
    return *this;
}

bool Board::operator==(const Board& other) const {
    return _grid == other._grid;
}

bool Board::operator!=(const Board& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const Board& b) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            char symbol = ' ';
            if (b._grid[i][j] == Player::X) symbol = 'X';
            else if (b._grid[i][j] == Player::O) symbol = 'O';
            os << symbol;
            if (j < 2) os << " | ";
        }
        os << "\n";
        if (i < 2) os << "---------\n";
    }
    return os;
}

std::istream& operator>>(std::istream& is, Board& b) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            char c;
            std::cout << "Cell [" << i << "][" << j << "] (X/O/_): ";
            is >> c;
            if (c == 'X') b._grid[i][j] = Player::X;
            else if (c == 'O') b._grid[i][j] = Player::O;
            else b._grid[i][j] = Player::None;
        }
    }
    return is;
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
    return std::all_of(_grid.begin(), _grid.end(), [](const auto& row) {
        return std::all_of(row.begin(), row.end(), [](Player p) {
            return p != Player::None;
        });
    });
}
