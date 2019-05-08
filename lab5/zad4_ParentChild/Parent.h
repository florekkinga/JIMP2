//
// Created by kinga on 4/2/19.
//

#ifndef ZAD4_PARENTCHILD_PARENT_H
#define ZAD4_PARENTCHILD_PARENT_H
#include<iostream>
#include "Child.h"

using namespace std;

class Parent {

    string name;
    string surname;
    int age;
    Child *child;

public:
    void PrzepiszDoInnejSzkoly(string nazwa);
    Parent(string name, string surname, int age, Child *child);

};


#endif //ZAD4_PARENTCHILD_PARENT_H
