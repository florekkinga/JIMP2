#include<iostream>
using namespace std;


int silnia(int n){
	if(n==1 || n==0){
		return 1;
	}
	
	else{
		return n*silnia(n-1);
	}
}
	
int main(){
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	cout << silnia(n);
}


