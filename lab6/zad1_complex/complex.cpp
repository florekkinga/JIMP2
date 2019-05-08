//
// Created by kinga on 4/9/19.
//

#include "complex.h"

complex::complex(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
}
complex complex::operator+(complex b) {
    complex result = complex(this->real + b.real, this->imaginary + b.imaginary);
    return result;
}

complex complex::operator-(complex b) {
    complex result = complex(this->real - b.real, this->imaginary - b.imaginary);
    return result;
}

complex complex::operator*(complex b) {
    double newreal = this->real*b.real - this->imaginary*b.imaginary;
    double newimaginary = this->real*b.imaginary + b.real*this->imaginary;
    complex result = complex(newreal, newimaginary);
    return result;
}

complex complex::operator/(complex b) {
    double newreal = (this->real*b.real + this->imaginary*b.imaginary)/(b.real*b.real + b.imaginary*b.imaginary);
    double newimaginary = (this->imaginary*b.real - b.imaginary*this->real)/(b.real*b.real + b.imaginary*b.imaginary);
    complex result = complex(newreal, newimaginary);
    return result;
}

istream& operator>>(istream & input, complex& c){
    input >> c.real;
    input.ignore();    // Ignore comma, i etc.
    input >> c.imaginary;
    return input;
}
ostream& operator<<(ostream & output, complex& c){
    output << c.real;
    cout<<"i";
    output << c.imaginary;
    return output;
}

double complex::getimaginary() {
    return this->imaginary;
}

double complex::getreal() {
    return this->real;
}