#include <iostream>
using  namespace std;

int main() {

	double prix_unitaire, qtt,prix_hors_taxe ,prix_tot, taxe;

	cout << "Salut, pour t'aidez a calculer plus vite (sachant que la taxe vaut: 12.5%):\n\nEntrer le prix unitaire en dollars ($): ";
	cin >> prix_unitaire;

	cout << "\nEntrer la quantite d'article : ";
	cin >> qtt;

	prix_hors_taxe = prix_unitaire * qtt;
	taxe = prix_hors_taxe * (12.5 / 100);
	prix_tot = prix_hors_taxe + taxe;

	cout << "\n\nPrix total hors taxe = " << prix_hors_taxe <<" $"
		<<"\nTaxe = " << taxe <<" $"
		<<"\nPrix total (taxe inclue) = " << prix_tot <<" $" << endl;

	return 0;

}