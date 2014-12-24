#ifndef COMMERCIAL_H_INCLUDED
#define COMMERCIAL_H_INCLUDED
#include "Employe.h"

using std::string;

class commercial:public Employe {

private:
    double _chiffre_affaire;
    static double BASE;
    static double PART;

public:
    commercial(string, string, int, int, double);
    ~commercial();
    void afficher() const;
    double base_salaire();
    double calculer_salaire();
};

#endif // COMMERCIAL_H_INCLUDED
