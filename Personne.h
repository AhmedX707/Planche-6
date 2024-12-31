//
// Created by Asus on 31/12/2024.
//

#ifndef PERSONNE_H
#define PERSONNE_H
#include <bits/stdc++.h>
using namespace std;
virtual class Personne {
private:
    int age;
    string nom,sexe;
public:
    Personne(int,string,string);
    string getNom();
    int getAge();
    string getSexe();
    void setNom(string);
    void setAge(int);
    virtual string getPersonne() ;
    virtual ~Personne();



};



#endif //PERSONNE_H
