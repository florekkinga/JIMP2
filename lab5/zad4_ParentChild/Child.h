//
// Created by kinga on 4/2/19.
//

#ifndef ZAD4_PARENTCHILD_CHILD_H
#define ZAD4_PARENTCHILD_CHILD_H

#include <iostream>
using namespace std;

class Child {

    string name;
    string surname;
    int age;
    string school;

    friend class Parent;

public:
    Child();
    Child(string name, string surname, int age, string school);

};


#endif //ZAD4_PARENTCHILD_CHILD_H
