//
// Created by Asus on 31/12/2024.
//

#ifndef CONTRACTUEL_H
#define CONTRACTUEL_H
#include "Enseignant.h"
#include "Etudiant.h"
#include<bits/stdc++.h>
using namespace std;
class Contractuel : public Enseignant, public Etudiant {
public:
    Contractuel( int age,const string& nom, string sexe, int charge, const string& filiere);

    string getPersonne() override;
};




#endif //CONTRACTUEL_H
