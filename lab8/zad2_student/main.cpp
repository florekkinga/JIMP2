#include <iostream>
#include <string.h>
#include <cstring>
#include "Student.h"
using namespace std;

int main()
{
    Student s1;
    s1.input();
    s1.checkNameandSurname();
    s1.checkage();
    s1.checkfield();

    return 0;
}