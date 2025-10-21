#include "painter.hpp"
#include <iostream>

class ConsolePainter : public Painter {
public:
    void DrawBoard(const Board& board) override {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                Player cell = board.GetCell({i, j});
                char symbol = ' ';
                if (cell == Player::X) symbol = 'X';
                else if (cell == Player::O) symbol = 'O';
                std::cout << symbol;
                if (j < 2) std::cout << " | ";
            }
            std::cout << "\n";
            if (i < 2) std::cout << "---------\n";
        }
    }

    void ShowWinner(Player winner) override {
        if (winner == Player::None)
            std::cout << "Draw!\n";
        else
            std::cout << "Winner: " << (winner == Player::X ? "X" : "O") << "\n";
    }
};
