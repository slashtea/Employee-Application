#ifndef TECHNICIEN_H_INCLUDED
#define TECHNICIEN_H_INCLUDED
#include "Employe.h"

using std::string;


class technicien:public Employe {

private:
    int _nb_unite_produite;
    static double BASE;
    static double PART;
    static double GAIN_UNITE;

public:
    technicien(string, string, int, int, int);
    ~technicien();
    void afficher() const;
    double base_salaire();
    double calculer_salaire();
};


#endif // TECHNICIEN_H_INCLUDED
