#include "circle.h"
#include "ball.h"
#include <iostream>

using namespace std;

int main(){
    ball ball1(0,0,10,0);
    cout<<ball1.crossection_field();
}