#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <cctype>

using namespace std;

int PolybiusC(char a) {
    char tab[5][5] = {
            {'A', 'B', 'C', 'D', 'E'},
            {'F', 'G', 'H', 'I', 'K'},
            {'L', 'M', 'N', 'O', 'P'},
            {'Q', 'R', 'S', 'T', 'U'},
            {'V', 'W', 'X', 'Y', 'Z'}
    };

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (a == tab[i][j]) return (i + 1) * 10 + j + 1;
                else if (a == 'J') return 24;
            }
        }
    }

char PolybiusD(int a) {
    char tab[5][5] = {
            {'A', 'B', 'C', 'D', 'E'},
            {'F', 'G', 'H', 'I', 'K'},
            {'L', 'M', 'N', 'O', 'P'},
            {'Q', 'R', 'S', 'T', 'U'},
            {'V', 'W', 'X', 'Y', 'Z'}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a==((i + 1) * 10 )+ j + 1) return tab[i][j];
        }
    }
}

string PolybiusCrypt(string message){

    string encrypted;
    for (int i=0; i<message.size(); i++) {
        if(message[i]!=' ') encrypted+=to_string(PolybiusC(message[i]));
        else encrypted +=" ";
    }
    return encrypted;
}

string PolybiusDecrypt(string encrypted) {

    int a,b;
    string decrypted;
    for (int i=0; i<encrypted.size(); i++) {
        if(encrypted[i]!=' ') {
            a = encrypted[i]-'0';
            b = encrypted[i+1] -'0';
            decrypted.push_back(PolybiusD(10*a+b));
            i++;
        }
        else decrypted+=" ";
    }

    return decrypted;
    }

int main(int argc, char *argv[]) {


    ifstream filein(argv[1]);

    if (filein.is_open() && (*argv[3]=='1' || *argv[3]=='0')) {
        string message;
        while (getline(filein, message)) {
            if(*argv[3]=='1') {
                ofstream fileout(argv[2], ios_base::in | ios_base::app);

                if(!fileout) cout << "Nie można otworzyć pliku!" << endl;
                else fileout << PolybiusCrypt(message) << endl;

            }
            else if(*argv[3]=='0') {
                ofstream fileout(argv[2], ios_base::in | ios_base::app);

                if(!fileout) cout << "Nie można otworzyć pliku!" << endl;
                else fileout << PolybiusDecrypt(message) << endl;

            }
        }
        filein.close();
    }
    else cout<<"error";

    return 0;
}