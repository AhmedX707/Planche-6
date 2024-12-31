//
// Created by Asus on 31/12/2024.
//
#ifndef CAMION_H
#define CAMION_H
#include<bits/stdc++.h>

#include "Vehicule.h"
using namespace std;
class Camion:Vehicule {
    public:
    Camion(int anne,double pr);
    string accelerer() override;
    void aff();



};



#endif //CAMION_H
