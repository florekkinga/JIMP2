#include <iostream>
#include "Backpack.h"
#define N 10
using namespace std;
int main() {

    Backpack backpack;

    for(int i=0;i<N;i++)
    {
        cout<<"Avaliable products: \n"
              "1. crisps, \n"
              "2. cookies, \n"
              "3. vodka, \n"
              "4. beer, \n"
              "5. wine,\n"
              "6. water. "
              "Choose one. Enter the number below: \n"
              "Your choice: ";
        int choice;
        cin>>choice;
        backpack.check(choice);
        backpack.printproducts();
    }


    return 0;
}