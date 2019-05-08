//
// Created by kinga on 4/2/19.
//

#include "Child.h"

Child::Child():name("xxx"),surname("xxx"), age(1), school("xxx"){

}
Child::Child(string name, string surname, int age, string school){
    this->name = name;
    this->surname = surname;
    this->age = age;
    this->school = school;
}
