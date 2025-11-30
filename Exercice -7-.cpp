#include <iostream>
using namespace std;

int main() {

	double note_1, note_2, note_3, moy;

	cout << "Pour calculer la moyenne de tes notes /20, entre les valeurs correspondante: \n\n"
		<<"Entrer la valeur de ta premiere note /20 : ";
	cin >> note_1;

	cout << "\nEntrer la valeur de ta deusieme note /20 : ";
	cin >> note_2;

	cout << "\nEntrer la valeur de ta troisieme note /20 : ";
	cin >> note_3;

	moy = (note_1 + note_2 + note_3) / 3;

	cout << "\n\nAlors ta Moyenne = " << moy <<"/20"<< endl;

	return 0;

}