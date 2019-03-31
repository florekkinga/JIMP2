#include <cmath>
#include <ostream>
#include <iostream>
#include "Point.h"

using ::std::ostream;
using ::std::endl;
using ::std::pow;
using ::std::sqrt;
using ::std::cout;

Point::Point():x_(0),y_(0){}

Point::Point(double x, double y){
    x_ = x;
    y_ = y;
}

Point::~Point() = default;

double Point::GetX() const{
    return x_;
}
double Point::GetY() const{
    return y_;
}
