#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction(int nominator, int denominator){
    this->nominator = nominator;
    this->denominator = denominator;
    checkifzero();
}

bool Fraction::checkifzero() {
    if (denominator == 0) {
        cout << "Nie można dzielić przez zero!" << endl;
        return false;
    }
    else {
        return true;
    }
}

void Fraction::print() {
    if(checkifzero()) {
        cout<<nominator<< "/" << denominator <<endl;
    }
}