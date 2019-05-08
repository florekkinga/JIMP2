//
// Created by kinga on 4/2/19.
//

#include "Parent.h"

Parent::Parent(string name, string surname, int age, Child *child){
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->child = child;
}

void Parent::PrzepiszDoInnejSzkoly(string nazwa) {
    child->school = nazwa;
    cout<<child->school;
}
