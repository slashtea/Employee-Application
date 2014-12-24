#ifndef EMPLOYE_H_INCLUDED
#define EMPLOYE_H_INCLUDED

using std::string;

class Employe {

protected:
	string _nom;
	string _prenom;
	int _age;
	int _anciennete;

public:
	Employe(string, string, int, int);
	virtual ~Employe();
	virtual double base_salaire();
	virtual void afficher() const;
	double virtual calculer_salaire();
};

#endif // EMPLOYE_H_INCLUDED
