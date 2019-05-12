//
// Created by kinga on 5/12/19.
//

#include "Pesel.h"
#include <cstring>
void Pesel::checking(){
    for (int i = 0; i <= strlen(number); i++) {
        try{
            if(i==2 and number[2]>1){
                throw 1;
            }
            if(i==4 and number[4]>3){
                throw 2;
            }
            if(i>11){
                i=strlen(number)+1;
                throw 3;

            }
        }
        catch(int p){
            cout<<"Error no. "<<p<<endl;
        }
    }
}