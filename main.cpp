#include <iostream>
#include "commercial.h"
#include "technicien.h"

using std::string;
using std::cout;
using std::endl;

int main()
{
    // Toutes les instances.
    Employe *tab[5];
    // Employe e1("Jhon", "Doe", 29, 6);
    commercial c1("commercial", "commercial", 33, 7, 10000);
    technicien t1("technicien", "technicien", 24, 2, 100);

    // Toutes les variables.
    double commercial_salaire = 0;
    double technicien_salaire = 1;

    // tab[0] = &e1;
    tab[1] = &c1;
    tab[2] = &t1;

    // Test sur la methode afficher().
    // tab[0]->afficher();
    tab[1]->afficher();
    tab[2]->afficher();

    // Test sur la methode salaire de base.
    commercial_salaire = tab[1]->calculer_salaire();
    technicien_salaire = tab[2]->base_salaire();

    cout << "Salaire du technicien: " << technicien_salaire << " dh" << endl;
    cout << "Salaire du commericial: "<< commercial_salaire << " dh" << endl << endl;

    return 0;
}
