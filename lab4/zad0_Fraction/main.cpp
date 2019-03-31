#include <iostream>
#include "fraction.h"
using namespace std;
int main() {
    int mianownik;
    int licznik;
    cout<<"Podaj licznik: ";
    cin>>licznik;
    cout<<"Podaj mianownik: ";
    cin>>mianownik;
    Fraction ulamek(licznik, mianownik);
    ulamek.print();
    return 0;
}