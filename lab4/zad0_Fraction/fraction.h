#ifndef FRACTION_FRACTION_H
#define FRACTION_FRACTION_H


class Fraction {

    int nominator;
    int denominator;

public:
    Fraction(int nominator, int denominator);

    bool checkifzero();
    void print();

};


#endif
