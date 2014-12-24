#include <iostream>
#include "commercial.h"

using std::cout;
using std::endl;

double commercial::BASE=10;
double commercial::PART=4;

commercial::commercial(string nom, string prenom, int age, int anciennete, double chiffre_affaire):Employe(nom,prenom,age,anciennete) {
    _chiffre_affaire = chiffre_affaire;
}

commercial::~commercial() {
    cout << "Destructeur de la classe commercial" << endl;
}

void commercial::afficher() const {
    cout << "Nom: " << _nom << endl;
	cout << "Preom: " << _prenom << endl;
	cout << "Age: " << _age << endl;
	cout << "Anciennete: " << _anciennete << " ans" << endl;
	cout << "Chiffre d'affaire: " << _chiffre_affaire << endl << endl;
}

double commercial::base_salaire() {
    return BASE + (_chiffre_affaire) * PART;
}

double commercial::calculer_salaire() {
    return (base_salaire() + (0.1 *base_salaire()*_anciennete));
}
