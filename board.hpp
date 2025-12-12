/**
 * @file board.hpp
 * @brief Definirea clasei Board
 * @author Eugen Plesca
 * @date 2025
 * @project Tic-Tac-Toe
 */

#pragma once

#include "player.hpp"
#include "point.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @class Board
 * @brief Reprezintă tabla de joc pentru Tic-Tac-Toe
 *
 * Clasa gestionează o tablă 3x3, mutările jucătorilor
 * și verificarea stării tablei.
 */
class Board {
    std::vector<std::vector<Player>> _grid;

public:
    /**
     * @brief Constructor implicit
     *
     * Creează o tablă de joc goală.
     */
    Board();

    /**
     * @brief Constructor de copiere
     * @param other tabla de copiat
     */
    Board(const Board& other);

    /**
     * @brief Operator de atribuire
     * @param other tabla sursă
     * @return referință la obiectul curent
     */
    Board& operator=(const Board& other);

    /**
     * @brief Compară două table
     * @param other tabla de comparat
     * @return true dacă tablele sunt egale
     */
    bool operator==(const Board& other) const;

    /**
     * @brief Verifică inegalitatea dintre două table
     * @param other tabla de comparat
     * @return true dacă tablele sunt diferite
     */
    bool operator!=(const Board& other) const;

    /**
     * @brief Afișează tabla de joc
     * @param os flux de ieșire
     * @param b tabla de afișat
     * @return fluxul de ieșire
     */
    friend std::ostream& operator<<(std::ostream& os, const Board& b);

    /**
     * @brief Citește starea tablei
     * @param is flux de intrare
     * @param b tabla de citit
     * @return fluxul de intrare
     */
    friend std::istream& operator>>(std::istream& is, Board& b);

    /**
     * @brief Plasează o mutare pe tablă
     * @param pos coordonatele mutării
     * @param player jucătorul curent
     * @return true dacă mutarea este validă
     */
    bool PlaceMove(const Point& pos, Player player);

    /**
     * @brief Returnează conținutul unei celule
     * @param pos coordonatele celulei
     * @return jucătorul din celulă
     */
    Player GetCell(const Point& pos) const;

    /**
     * @brief Verifică dacă tabla este completă
     * @return true dacă nu mai există celule libere
     */
    bool IsFull() const;
};
