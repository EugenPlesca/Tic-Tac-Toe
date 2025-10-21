#pragma once
#include <iostream>

struct Point {
    int x;
    int y;

    Point() : x(0), y(0) {}
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}
    Point(const Point& other) : x(other.x), y(other.y) {}

    Point& operator=(const Point& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
        }
        return *this;
    }

    bool operator==(const Point& other) const { return x == other.x && y == other.y; }
    bool operator!=(const Point& other) const { return !(*this == other); }

    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Point& p) {
        std::cout << "x = ";
        is >> p.x;
        std::cout << "y = ";
        is >> p.y;
        return is;
    }
};
