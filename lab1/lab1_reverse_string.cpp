#include<iostream>
#include<string>
using namespace std;

string reverse(string str){

	const char *characters = str.c_str();
	size_t size = str.size();
	char reversed_characters[size];
	for(int i =1; i<=size+1; i++){
		if(*characters == '\0') return string(reversed_characters);
		else {
			reversed_characters[size-i] = *characters;
			characters++;
		}
	}
}
	
int main(){
	string str;
	cout<<"podaj napis: ";
	cin>>str;
	cout<<reverse(str);
}
	
