#include <iostream>
#include "complex.h"
using namespace std;
int main() {
    complex tmp (5,2);
    complex tmp2 (3,7);
    complex test_a = tmp + tmp2;
    complex test_s = tmp - tmp2;
    complex test_m = tmp * tmp2;
    complex test_d = tmp / tmp2;
    cout<<"+: "<< test_a.getreal() << "i" << test_a.getimaginary()<<endl;
    cout<<"-: "<< test_s.getreal() << "i" << test_s.getimaginary()<<endl;
    cout<<"*: "<< test_m.getreal() << "i" << test_m.getimaginary()<<endl;
    cout<<"/: "<< test_d.getreal() << "i" << test_d.getimaginary()<<endl;
    cout<<test_a<<endl;
    cout<<test_s<<endl;
    cout<<test_m<<endl;
    cout<<test_d<<endl;
    return 0;
}