//
// Created by Asus on 31/12/2024.
//

#ifndef VEHICULE_H
#define VEHICULE_H
#include <bits/stdc++.h>
using namespace std;
class Vehicule {
private:
    int nums=1,numv=1,annee;
    double prix;
    public:
    Vehicule(int anne,double pri);
    virtual void aff();
    virtual string accelerer ();




};



#endif //VEHICULE_H
