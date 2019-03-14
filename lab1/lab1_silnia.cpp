#include<iostream>

using namespace std;

int main(){
	int n;
	int wynik=1;
	cout << "Podaj liczbe: ";
	cin >> n;
	for (int i=1; i<=n; i++){
		wynik*=i;
	}
cout<<wynik<< endl;
}
