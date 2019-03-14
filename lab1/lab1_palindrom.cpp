#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrom(string str){
    int j = 0;
    size_t k = str.size()-1;
    while(j < k){
        if(str[j]!=str[k]) return false;
        else {
            j++; k--;
        }
    }
    return true;
}

int main() {

    cout<<"Podaj napis: ";
    string napis;
    getline(cin, napis);
    if(isPalindrom(napis)) cout<<"Napis to palindrom";
    else cout<<"Napis to nie palindrom";
    return 0;
}