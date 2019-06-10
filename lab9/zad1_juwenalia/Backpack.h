//
// Created by kinga on 6/10/19.
//

#ifndef JUWENALIA_BACKPACK_H
#define JUWENALIA_BACKPACK_H

#include <vector>
#include <string>
using namespace std;

class Backpack {

    float sum = 0;
    float al = 0;
    int kal = 0;
    vector<string> products;

public:
    Backpack(){};
    void check(int product);
    void addproduct(string product);
    void productchoice(int product, double *weight, int *kcal, int *alcohol, string *name);
    void printproducts();
};



#endif //JUWENALIA_BACKPACK_H
