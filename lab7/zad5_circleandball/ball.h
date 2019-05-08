//
// Created by kinga on 4/16/19.
//

#ifndef ZAD5_CIRCLEANDBALL_BALL_H
#define ZAD5_CIRCLEANDBALL_BALL_H

#include "circle.h"

class ball : public circle {

    double z;

public:
    ball(double x, double y, double r, double z) : circle(x,y,r) {this->z=z;}
    double field();
    double crossection_field() {circle::field();};

};


#endif //ZAD5_CIRCLEANDBALL_BALL_H
