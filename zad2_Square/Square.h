#ifndef ZAD2_SQUARE_SQUARE_H
#define ZAD2_SQUARE_SQUARE_H


#include "Point.h"

class Square {

    Point p1;
    Point p2;
    Point p3;
    Point p4;

public:

    Square(Point p1, Point p2, Point p3, Point p4);
    double circumference() const;
    double area() const;
    double distance(Point p1, Point p2) const;

};


#endif //ZAD2_SQUARE_SQUARE_H
