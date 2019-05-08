//
// Created by kinga on 4/16/19.
//

#include "circle.h"

circle::circle(double x, double y, double r) {
    this->x=x;
    this->y=y;
    this->r=r;
}

double circle::field(){
    return 3.14*r*r;
}