#include<iostream>

using namespace std;

int main() {
	
	int angka;
	
	cout << "input angka : ";
	cin >> angka;
	if(angka >= 0)
		cout << angka << " adalah bilangan positif";
	else
		cout << angka << " adalah bilangan negatif";
	
	return 0;
}
