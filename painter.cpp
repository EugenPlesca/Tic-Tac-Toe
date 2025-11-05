#include "painter.hpp"
#include <sstream>

void ConsolePainter::DrawBoard(const Board& board) {
    std::ostringstream output;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            Player cell = board.GetCell({i, j});
            char symbol = ' ';
            if (cell == Player::X) symbol = 'X';
            else if (cell == Player::O) symbol = 'O';
            output << symbol;
            if (j < 2) output << " | ";
        }
        output << "\n";
        if (i < 2) output << "---------\n";
    }
    std::cout << output.str();
}

void ConsolePainter::ShowWinner(Player winner) {
    if (winner == Player::None)
        std::cout << "Draw!\n";
    else
        std::cout << "Winner: " << (winner == Player::X ? "X" : "O") << "\n";
}
