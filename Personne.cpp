//
// Created by Asus on 31/12/2024.
//

#include "Personne.h"
#include<bits/stdc++.h>
using namespace std;
Personne::~Personne() {
}

int Personne::getAge() {
    return age;
}
void Personne::setAge(int age) {
    Personne::age = age;
}
string Personne::getSexe() {
    return sexe;
}
string Personne::getNom() {
    return nom;
}
void Personne::setNom(string) {
    Personne::nom = nom;
}
Personne::Personne(int ag, string nm, string s) {
    age = ag;
    sexe = s;
    nom = nm;
}
string Personne::getPersonne() {

    return "Nom: " + nom + ", Age: " + to_string(age) + ", Sexe: " + sexe;
}







