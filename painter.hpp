/**
 * @file painter.hpp
 * @brief Definirea claselor Painter și ConsolePainter
 * @author Eugen Plesca
 * @date 2025
 * @project Tic-Tac-Toe
 */

#pragma once

#include "board.hpp"
#include <iostream>

/**
 * @class Painter
 * @brief Interfață pentru afișarea jocului
 *
 * Definește metodele necesare pentru desenarea tablei
 * și afișarea rezultatului jocului.
 */
class Painter {
public:
    /**
     * @brief Desenează tabla de joc
     * @param board tabla de joc
     */
    virtual void DrawBoard(const Board& board) = 0;

    /**
     * @brief Afișează câștigătorul jocului
     * @param winner jucătorul câștigător
     */
    virtual void ShowWinner(Player winner) = 0;

    /** Destructor virtual */
    virtual ~Painter() = default;
};

/**
 * @class ConsolePainter
 * @brief Implementare a interfeței Painter pentru consolă
 *
 * Afișează tabla de joc și rezultatul folosind consola.
 */
class ConsolePainter : public Painter {
public:
    /** Desenează tabla în consolă */
    void DrawBoard(const Board& board) override;

    /** Afișează câștigătorul în consolă */
    void ShowWinner(Player winner) override;
};
