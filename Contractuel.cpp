//
// Created by Asus on 31/12/2024.
//

#include "Contractuel.h"
#include<bits/stdc++.h>
using namespace std;
#include "Etudiant.h"
#include "Enseignant.h"
Contractuel::Contractuel( int age,const string& nom, string sexe, int charge, const string& filiere)
    : Personne( age,nom, sexe), Enseignant( age,nom, sexe, charge), Etudiant(age,nom,  sexe, filiere) {}

// Informations
string Contractuel::getPersonne()  {
    return Enseignant::getPersonne() + ", Filière: " + getFiliere();
}

