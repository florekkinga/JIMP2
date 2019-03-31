#include <memory>
#include <vector>
#include <iostream>
#include <sstream>
#include <cmath>
#include "Point.h"

using namespace std;

double distance(Point p1, Point p2){
    return sqrt(pow((p1.GetX() - p2.GetX()), 2) + pow(p1.GetY() - p2.GetY(), 2));

}

int main(void){

    Point p1 (1, 1);
    Point p2 (2, 2);
  //  Point p3 {}; //brace initilizer preferowany

    cout<<distance(p1,p2)<<endl;

  /*  //wywołuje konstruktor parametryczny
    Point p4 (12,34);
    Point p5 {30, 20};

    const Point *ptr_p = new Point(3,4);

    p2.ToString(&cout);
    cout <<  ptr_p->Distance(p2) << endl;

    delete ptr_p;

//parametry przekazywane do make_unique tworzące
//wskaznik unique_ptr przyjmują argumety konstruktora parametrycznego
//stąd możliwe są dwa wywowłania:
    auto ptr_p2 = make_unique<Point>();
    auto ptr_p3 = make_unique<Point>(-15,90);

    stringstream ss;
    ptr_p2->ToString(&ss);
    ss << " i ";
    ptr_p3->ToString(&ss);
    cout << "Odległość między punktami " << ss.str() << " wynosi " << ptr_p2->Distance(*ptr_p3) << endl;
    cout << "Zostanie wywołany destruktor punktów ptr_p2 i ptr_p3?" << endl;
*/
/*
    //ronica miedzy emplace_back a push_back:
    vector<Point> vp;
    //push_back kopiuje przekazany punkt na koniec wektora
    vp.push_back(Point {9,8});
    //natomiast emplace_back tworzy obiekt na koncu wektora
    //argumenty przekazane do funkcji odpowiadają konstruktorowi parametrycznemu
    vp.emplace_back(5, -5);
    //wiec mozna tez wywołać:
    vp.emplace_back();
*/
 }