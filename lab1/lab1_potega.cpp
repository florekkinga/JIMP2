#include<iostream>

using namespace std;

int main(){
	int n,a;
	cout << "Podaj liczbe: ";
	cin >> a;
	cout << "Podaj potege: ";
	cin >> n;
	int wynik=1;
	if(n==0) wynik=1;
	for(int i=1; i<=n; i++){
	wynik*=a;
	}
cout<<wynik;
}
	
