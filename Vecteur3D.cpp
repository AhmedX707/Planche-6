//
// Created by Asus on 31/12/2024.
//

#include "Vecteur3D.h"
#include<bits/stdc++.h>
using namespace std;
Vecteur3D::Vecteur3D() {
   x=0;y=0;z=0;
}
Vecteur3D::Vecteur3D(double x, double y, double z1) {
    Vecteur(x,y);
   z=z1;
}
void Vecteur3D::aff() {
    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
void Vecteur3D::dep(double dx, double dy, double dz) {
    x+=dx;
    y+=dy;
    z+=dz;
}





