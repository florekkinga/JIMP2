//
// Created by kinga on 5/12/19.
//

#ifndef ZAD2_STUDENT_STUDENT_H
#define ZAD2_STUDENT_STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string surname;
    int age;
    string field;
public:

    Student(string name = "Jan", string surname = "Kowalski", int age = 21, string field = "informatyka");

    void input();

    void checkNameandSurname();

    void checkage();

    void checkfield();

    void print();

    ~Student()= default;
};


#endif //ZAD2_STUDENT_STUDENT_H
