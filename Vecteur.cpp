//
// Created by Asus on 31/12/2024.
//

#include "Vecteur.h"
#include <bits/stdc++.h>
using namespace std;
 Vecteur::Vecteur(double x1,double y1) {
    x=x1;
      y=y1;
}
void Vecteur::aff() {
     cout << "("<<x<<","<<y<<")" << endl;
}
Vecteur::~Vecteur() {}
void Vecteur::depl(double dx, double dy) {
    x += dx;
     y += dy;
}
Vecteur::Vecteur() {
     x=0;y=0;
}






