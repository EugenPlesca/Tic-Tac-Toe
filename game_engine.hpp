/**
 * @file game_engine.hpp
 * @brief Definirea clasei GameEngine
 * @author Eugen Plesca
 * @date 2025
 * @project Tic-Tac-Toe
 */

#pragma once

#include <memory>
#include "painter.hpp"

class Board;
enum class Player;

/**
 * @class GameEngine
 * @brief Gestionează logica principală a jocului Tic-Tac-Toe
 *
 * Clasa coordonează tabla de joc, jucătorii,
 * afișarea grafică și fluxul unei partide.
 */
class GameEngine {
    std::shared_ptr<Board> _board;     /**< Tabla de joc */
    std::shared_ptr<Painter> _painter; /**< Obiect pentru afișare */
    Player _currentPlayer;             /**< Jucătorul curent */

public:
    /**
     * @brief Constructor implicit
     *
     * Creează motorul jocului fără painter.
     */
    GameEngine();

    /**
     * @brief Constructor cu painter
     * @param painter obiect responsabil de afișare
     */
    GameEngine(std::shared_ptr<Painter> painter);

    /**
     * @brief Inițializează jocul
     *
     * Resetează tabla și jucătorul curent.
     */
    void Init();

    /**
     * @brief Rulează jocul
     *
     * Gestionează bucla principală a jocului.
     */
    void Run();

    /**
     * @brief Verifică existența unui câștigător
     * @return jucătorul câștigător sau Player::None
     */
    Player CheckWinner() const;
};
