#include <iostream>
#include "Pesel.h"
using namespace std;


int main() {
    char *numer=new char[20];
    cout<<"PESEL:"<<endl;
    cin>>numer;
    Pesel pesel(numer);
    pesel.checking();
    return 0;
}