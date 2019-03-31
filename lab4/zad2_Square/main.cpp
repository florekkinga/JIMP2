#include <memory>
#include <vector>
#include <iostream>
#include <sstream>
#include <cmath>
#include "Point.h"
#include "Square.h"
using namespace std;

int main() {

    double x,y;
    cout<<"Podaj kolejno wierzcholki kwadratu ABCD: "<<endl;

    cout<<"Wierzcholek A:"<<endl;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    Point p1(x,y);

    cout<<"Wierzcholek B:"<<endl;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    Point p2(x,y);

    cout<<"Wierzcholek C:"<<endl;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    Point p3(x,y);

    cout<<"Wierzcholek D:"<<endl;
    cout<<"x = ";
    cin>>x;
    cout<<"y = ";
    cin>>y;
    Point p4(x,y);

    Square s1(p1,p2,p3,p4);


    cout<<"Obwod: "<< s1.circumference() <<endl;
    cout<<"Pole: "<< s1.area() <<endl;
    return 0;
}