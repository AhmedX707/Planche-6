//
// Created by Asus on 31/12/2024.
//

#include "Vehicule.h"
#include<bits/stdc++.h>
using namespace std;
Vehicule::Vehicule(int anne, double pri) {
    annee = anne;
    prix = pri;
    nums++;
    numv++;
}
string Vehicule::accelerer() {
    return "je peut atteindre jsp";
}
void Vehicule::aff() {
    cout<<nums<<"TUN"<<numv<<endl;
}




