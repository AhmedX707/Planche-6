#include "Vecteur.h"
#include "Vecteur3D.h"
using namespace std;
#include <bits/stdc++.h>
int main() {

    Vecteur v1;
    cout << "Vecteur nul : ";
    v1.aff();

    v1.depl(2.5, 3.5);
    cout << "Vecteur déplacé : ";
    v1.aff();

    Vecteur3D* v3d = new Vecteur3D(1.0, 2.0, 3.0);
    cout << "Vecteur3D créé dynamiquement : ";
    v3d->aff();

    // Déplacement du vecteur3D et affichage
    v3d->dep(1.0, 1.0, 1.0);
    cout << "Vecteur3D déplacé : ";
    v3d->aff();

    // Libération de la mémoire
    delete v3d;

    return 0;
}
