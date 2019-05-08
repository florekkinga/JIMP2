//
// Created by kinga on 4/9/19.
//

#ifndef ZAD1_COMPLEX_H
#define ZAD1_COMPLEX_H

#include <iostream>
#include <iomanip>
using namespace std;
class complex {
private:
    double real;
    double imaginary;
public:
    complex();
    complex(double real, double imaginary);
    complex operator+(complex b);
    complex operator-(complex b);
    complex operator*(complex b);
    complex operator/(complex b);
    friend istream& operator>>(istream &, complex&);
    friend ostream& operator<<(ostream &, complex&);
    double getreal();
    double getimaginary();

};


#endif //ZAD1_COMPLEX_H
