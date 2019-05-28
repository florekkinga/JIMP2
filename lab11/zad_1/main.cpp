#include <iostream>
using namespace std;

template <class T1, class T2>
auto sum(T1 element1, T2 element2){
    return element1 + element2;
};

int main() {

    cout<<sum<int, int>(2, 0.342746);
    return 0;
}