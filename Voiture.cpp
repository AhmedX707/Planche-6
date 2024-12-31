//
// Created by Asus on 31/12/2024.
//

#include "Voiture.h"
#include<bits/stdc++.h>
using namespace std;
    Voiture::Voiture(int anne,double pri):Vehicule(anne,pri){}
string Voiture::accelerer() {
    return "Je peux atteindre 200km/h";
}
void Voiture::aff() {
        Vehicule::aff();
}




