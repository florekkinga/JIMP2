//
// Created by kinga on 6/10/19.
//

#include "Backpack.h"
#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

void Backpack::productchoice(int product, double *weight, int *kcal, int *alcohol, string *name) {
    switch(product) {
        case 1:
            *name = "crisps";
            *weight = 0.2;
            *kcal = 500;
            *alcohol = 0;
            break;
        case 2:
            *name = "cookies";
            *weight = 0.4;
            *kcal = 300;
            *alcohol = 0;
            break;
        case 3:
            *name = "vodka";
            *weight = 0.5;
            *kcal = 1000;
            *alcohol = 40;
            break;
        case 4:
            *name = "beer";
            *weight = 0.3;
            *kcal = 150;
            *alcohol = 6;
            break;
        case 5:
            *name = "wine";
            *weight = 0.5;
            *kcal = 200;
            *alcohol = 14;
            break;
        case 6:
            *name = "water";
            *weight = 0.3;
            *kcal = 50;
            *alcohol = 0;
            break;
        default:   cerr << "nie ma takiego produktu!" ;
    }
}


void Backpack::check(int product)
{
    string name;
    double weight = 0;
    int kcal = 0;
    int alcohol = 0;
    productchoice(product, &weight, &kcal, &alcohol, &name);
    this->sum += weight;
    this->kal += kcal;
    this->al += alcohol;
    try
    {
        if(sum >= 4.5)
            throw 1;
        if(kal >= 3000)
            throw 2;
        if(al >= 45)
            throw 3;
    }
    catch(int k)
    {
        if(k==1) {
            cerr << "Twój plecak wiecej nie zmiesci!\n";
        }
        if(k==2) {
            cerr << "To zbyt duzo kcal!\n\n";
        }
        if(k==3) {
            cerr << "To za duzo alkoholu!\n\n";
        }
    }

    addproduct(name);

}

void Backpack::addproduct(string product) {
    this->products.push_back(product);

}

void Backpack::printproducts() {
    cout<<"Zakupione produkty"<<endl;
    for(int i =0; i<products.size(); i++){
        cout<<products[i]<<endl;
    }

}
