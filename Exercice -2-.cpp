#include <iostream>
using namespace std;

int main() {

	int a, b, somme;
	double moyenne;

	cout << "Entrer la valeur de a: ";
	cin >> a;

	cout << "\nEntrer la valeur de b: ";
	cin >> b;


	somme = a + b;
	cout << "\nLa somme de a + b: " << somme;

	moyenne = (double)somme / 2;
	cout << "\nLa moyenne de la somme de a + b : " << moyenne;

	return 0;

}