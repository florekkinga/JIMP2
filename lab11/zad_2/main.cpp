#include <iostream>
using namespace std;
template <class T>
auto value (T element){
    return *element;
}

int main() {
    int tmp = 2;
    int *ptr = &tmp;
    cout<<value<int*>(ptr);
    return 0;
}