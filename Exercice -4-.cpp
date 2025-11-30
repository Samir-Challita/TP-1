#include<iostream>
using namespace std;

int main() {

	double R, surface, perimetre;
	const double pi = 3.14;

	cout << "Entrer la valeur de R: ";
	cin >> R;

	surface = pi * pow(R, 2);

	cout << "\nTa surface est: " << surface;

	perimetre = 2 * pi * R;
	cout << "\nTon perimetre: " << perimetre << endl;

	return 0;

}