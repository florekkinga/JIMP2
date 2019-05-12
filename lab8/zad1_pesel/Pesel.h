//
// Created by kinga on 5/12/19.
//

#ifndef ZAD1_PESEL_PESEL_H
#define ZAD1_PESEL_PESEL_H

#include <iostream>
#include <cstring>
using namespace std;

class Pesel{
private:
    char *number=new char[12];
public:

    Pesel(char *a){
        number=a;
    }
    void checking();
};

#endif //ZAD1_PESEL_PESEL_H
