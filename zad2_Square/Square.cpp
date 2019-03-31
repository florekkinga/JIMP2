#include <iostream>
using namespace std;
#include "Square.h"
#include <cmath>

Square::Square(Point p1, Point p2, Point p3, Point p4){
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    this->p4 = p4;
}

double Square::distance(Point p1, Point p2) const{
    return sqrt(pow((p1.GetX() - p2.GetX()), 2) + pow(p1.GetY() - p2.GetY(), 2));

}

double Square::circumference() const {
    if(distance(p1, p2) == distance(p2, p3) && distance(p2, p3) == distance(p3, p4) && distance(p3, p4) == distance(p4, p1))
        return distance(p1,p2) + distance(p2,p3) + distance(p3,p4) + distance(p4,p1);
    else {
        cout << "Wierzcholki podane w zlej kolejnosci lub podana figura nie jest kwadratem" << endl;
        exit(0);
    }
}

double Square::area() const {
    if(distance(p1, p2)==distance(p2,p3) && distance(p2,p3)==distance(p3,p4) && distance(p3,p4)==distance(p4,p1))
        return distance(p1,p2)*distance(p2,p3);
    else {
        cout << "Wierzcholki podane w zlej kolejnosci lub podana figura nie jest kwadratem" << endl;
        exit(0);
    }
}
