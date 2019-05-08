#include <iostream>
#include "VectorFill.h"

using namespace std;

int main() {
    VectorFill example;
    example.push_back(1);
    example.push_back(1);
    example.push_back(1);
    example.push_back(1);
    example.push_back(1);


    example.UniformFIll(5);

    for( auto n : example){
        cout<<n<<endl;
    }

    return 0;
}