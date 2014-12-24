#include <iostream>
#include <string>
#include "Employe.h"

using std::cin;
using std::cout;
using std::endl;

Employe::Employe(string nom, string prenom, int age, int anciennete) {
	_nom = nom;
	_prenom = prenom;
	_age = age;
	_anciennete = anciennete;
}

Employe::~Employe() {
    cout << "Destructeur de la classe mere" << endl;
}

void Employe::afficher() const {
	cout << "Nom: " << _nom << endl;
	cout << "Preom: " << _prenom << endl;
	cout << "Age: " << _age << endl;
	cout << "Anciennete: " << _anciennete << " ans" << endl << endl;
}

double Employe::base_salaire() {

}

double Employe::calculer_salaire() {

}
