//
// Created by kinga on 5/12/19.
//

#include "Student.h"
#include "string"
#include "iostream"
using namespace std;


Student::Student(string name, string surname, int age, string field)
{
    this->name=name;
    this->surname=surname;
    this->age=age;
    this->field=field;
}

void Student::input()
{
    cout<<"Podaj imie: "; cin>>name;
    cout<<"Podaj nazwisko: "; cin>>surname;
    cout<<"Podaj swoj wiek: "; cin>>age;
    cout<<"Podaj kierunek studiow: "; cin>>field;
}

void Student::checkNameandSurname()
{
    try
    {
        if((name[0] > 64) && (name[0] < 91))
            throw 1;
        if((name[0] > 96) && (name[0] < 123))
            throw 0;
        if(surname[0] > 64 && surname[0] < 91)
            throw 1;
        if((surname[0] > 96) && (surname[0] < 123))
            throw 0;
        for(int i=0;i<name.length();i++)
        {
            if ((name[i] > 47) && (name[i] < 58))
                throw 0;
        }
        for(int i=0;i<surname.length();i++)
        {
            if ((surname[i] > 47) && (surname[i] < 58))
                throw 0;
        }
    }
    catch (int k)
    {
        if(k==1)
            cout<<"Poprawnie wpisane imie i nazwisko.\n";
        if(k==0)
            cout<<"Niepoprawnie wpisane imie i naziwsko (musi byc z wielkiej litery i nie moze zawierac innych znakow niz litery)!\n";
    }
}

void Student::checkage()
{
    try
    {
        if(age>10 && age <100)
            throw 1;
        if(age<10 || age >100)
            throw 0;
    }
    catch(int k)
    {
        if(k==1)
            cout<<"Poprawnie podany wiek.\n";
        if(k==0)
            cout<<"Niepoprawny wiek!\n";
    }
}

void Student::checkfield()
{
    try
    {
        if(field == "Informatyka" || field == "Ekonomia" || field == "Automatyka" || field =="Elektrotechnika")
            throw 1;
        else throw 0;
    }
    catch (int k)
    {
        if(k==1)
            cout<<"Poprawnie podany kierunek studiow.\n";
        if(k==0)
            cout<<"Nie ma takiego kierunku!\n";
    }

}

void Student::print() {
    cout<<name<<endl;
    cout<<surname<<endl;
    cout<<age<<endl;
    cout<<field<<endl;
}
