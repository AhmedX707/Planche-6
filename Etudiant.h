//
// Created by Asus on 31/12/2024.
//
#include "Personne.h"
#include <bits/stdc++.h>
using namespace std;
#ifndef ETUDIANT_H
#define ETUDIANT_H
class Etudiant: virtual public Personne {
private:
    string filiere;
    public:
    Etudiant(int age,const string& nom,string sexe, const string& filiere);
    string getFiliere();
    string getPersonne()  override;

};
#endif
