#include <iostream>
#include<cmath>
using namespace std;

int main() {

	double x_a, y_a, x_b, y_b, Longueur, largeur, perimetre, Aire;

	cout << "Entrer les valeurs demander: \n\nL'abscisse du point A : ";
	cin >> x_a;

	cout << "\nCoordonne du point A : ";
	cin >> y_a;

	cout << "\nL'abscisse du point B : ";
	cin >> x_b;

	cout << "\nCoordonne du point B : ";
	cin >> y_b;

	cout << "\n\n\nA : (" << x_a << ";" << y_a << ")";
	cout << "\nB : (" << x_b << ";" << y_b << ")";

	Longueur = abs(x_a - x_b);
	largeur = abs(y_a - y_b);
	perimetre = 2 * (Longueur + largeur);
	Aire = Longueur * largeur;

	cout << "\n\nLa longueur est : " << Longueur << "\nLa largeur est : " << largeur 
		<< "\nLe perimetre est : " << perimetre << "\nL'aire est : " << Aire<<endl<<endl;
		
	return 0;

}