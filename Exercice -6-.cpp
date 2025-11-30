#include<iostream>
using namespace std;

int main() {
	double a, n, r, s;

	cout << "Entrer la valeur de A : ";
	cin >> a;

	cout << "\nEntrer la valeur du nombre de terme N : ";
	cin >> n;

	cout << "\nEntrer la valeur de la raison R : ";
	cin >> r;

	s = n / 2 * (2 * a + (n - 1) * r);

	cout << "\n\nLa somme des termes : " << s << endl;

	return 0;


}