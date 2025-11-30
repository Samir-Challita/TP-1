#include<iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "Ecrit une valeur de a: ";
	cin >> a;

	cout << "\nEcrit une valeur b, different de a: ";
	cin >> b;

	c = a; a = b;

	cout << "Les valeurs sont les suivantes: \n" << b << " et " << c;

	return 0;

}