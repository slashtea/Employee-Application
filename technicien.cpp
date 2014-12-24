#include <iostream>
#include "technicien.h"

using std::string;
using std::endl;
using std::cout;

double technicien::BASE=10;
double technicien::PART=10;
double technicien::GAIN_UNITE=2;

technicien::technicien(string nom, string prenom, int age, int anciennete, int nb_unite_produite):Employe(nom,prenom,age,anciennete) {
    _nb_unite_produite = nb_unite_produite;
}

technicien::~technicien() {
    cout << "Destructeur de la classe technicien" << endl;
}

void technicien::afficher() const {
    cout << "Nom: " << _nom << endl;
	cout << "Preom: " << _prenom << endl;
	cout << "Age: " << _age << endl;
	cout << "Anciennete: " << _anciennete << " ans" << endl;
	cout << "Nombre d'unites produites: " << _nb_unite_produite << endl << endl;
}

double technicien::base_salaire() {
    return BASE + (_nb_unite_produite * PART * GAIN_UNITE);
}

double technicien::calculer_salaire() {
    return base_salaire() + (0.1 * base_salaire() * _anciennete);
}


