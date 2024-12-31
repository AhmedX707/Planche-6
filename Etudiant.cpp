#include "Etudiant.h"
#include <bits/stdc++.h>
using namespace std;
/**
 *
 * @param nom
 * @param age
 * @param sexe
 * @param filiere
 */
Etudiant::Etudiant(int age,const string& nom,string sexe, const string& filiere)
    : Personne(age,nom, sexe), filiere(filiere) {}

string Etudiant::getFiliere()  { return filiere; }

string Etudiant::getPersonne() {
    return Personne::getPersonne() + ", Filière: " + filiere;
}
