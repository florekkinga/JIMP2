#include<iostream>
using namespace std;


int potega(int n, int a){
	if(n==1){
		return a;
	}
	if(n==0){
		return 1;
	}

	else{
		return a*potega(n-1, a);
	}
}
	
int main(){
	int n;
	int a;
	cout << "Podaj liczbe: ";
	cin >> a;
	cout << "Podaj potege: ";
	cin >> n;
	cout << potega(n,a);
}


