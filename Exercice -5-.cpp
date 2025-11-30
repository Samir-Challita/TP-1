#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, reponse;

	cout << "Salut, pour calculer (A+B)^2 tu n'a que de faire d'entrer les valeurs:\n\nEntrer la valeur de A : ";
	cin >> a;
	cout << "\nEntrer la valeur de B : ";
	cin >> b;

	reponse = pow((a + b), 2); //On peut de enlever les parentaise par exemple pow(a + b, 2) sa donne la meme reponse

	cout << "\n\nAlors (" << a << "+" << b << ")^2 = " << reponse<<endl;

	return 0;

}