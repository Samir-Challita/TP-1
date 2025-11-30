#include<iostream>
using namespace std;

int main() {

	int annee_de_naissance, age;
	cout << "Entrer votre Annne de naissance: ";
	cin >> annee_de_naissance;

	age = 2025 - annee_de_naissance;

	cout << "\nTon age est: " << age;

	return 0;

}