//
// Created by kinga on 3/31/19.
//

#ifndef ZAD2_SQUARE_POINT_H
#define ZAD2_SQUARE_POINT_H


class Point {
public:
    Point();
    Point(double x, double y);
    ~Point();

    double GetX() const;
    double GetY() const;

private:

    double x_, y_;
};

#endif //ZAD2_SQUARE_POINT_H
