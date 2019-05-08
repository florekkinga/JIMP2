#include <iostream>
#include "Parent.h"
#include "Child.h"
using namespace std;

int main() {

    Child dziecko("aaa","aaa",5,"stara");
    Parent rodzic("rrr", "aaa", 40, &dziecko);
    rodzic.PrzepiszDoInnejSzkoly("nowa szkola");
    return 0;
}