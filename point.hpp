/**
 * @file point.hpp
 * @brief Definirea structurii Point
 * @author Eugen Plesca
 * @date 2025
 * @project Tic-Tac-Toe
 */

#pragma once

#include <iostream>

/**
 * @struct Point
 * @brief Reprezintă coordonatele unei poziții pe tablă
 *
 * Structura este utilizată pentru a identifica pozițiile
 * de pe tabla de joc Tic-Tac-Toe.
 */
struct Point {
    int x; /**< Coordonata pe axa X */
    int y; /**< Coordonata pe axa Y */

    /** Constructor implicit */
    Point() : x(0), y(0) {}

    /**
     * Constructor cu parametri
     * @param xVal coordonata X
     * @param yVal coordonata Y
     */
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    /**
     * Constructor de copiere
     * @param other punctul sursă
     */
    Point(const Point& other) : x(other.x), y(other.y) {}

    /**
     * Operator de atribuire
     * @param other punctul sursă
     * @return referință la obiectul curent
     */
    Point& operator=(const Point& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
        }
        return *this;
    }

    /**
     * Compară două puncte
     * @param other punctul de comparat
     * @return true dacă punctele sunt egale
     */
    bool operator==(const Point& other) const { return x == other.x && y == other.y; }

    /**
     * Verifică inegalitatea dintre două puncte
     * @param other punctul de comparat
     * @return true dacă punctele sunt diferite
     */
    bool operator!=(const Point& other) const { return !(*this == other); }

    /**
     * Afișează punctul
     * @param os flux de ieșire
     * @param p punctul de afișat
     * @return fluxul de ieșire
     */
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }

    /**
     * Citește coordonatele punctului
     * @param is flux de intrare
     * @param p punctul de citit
     * @return fluxul de intrare
     */
    friend std::istream& operator>>(std::istream& is, Point& p) {
        std::cout << "x = ";
        is >> p.x;
        std::cout << "y = ";
        is >> p.y;
        return is;
    }
};
