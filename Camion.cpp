//
// Created by Asus on 31/12/2024.
//

#include "Camion.h"
#include<bits/stdc++.h>
using namespace std;
Camion::Camion(int anne,double pr):Vehicule(anne,pr) {}
string Camion::accelerer() {
    return"je peut atteindre 120kmh";
}
void Camion::aff() {
    Vehicule::aff();
}









