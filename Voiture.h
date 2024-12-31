//
// Created by Asus on 31/12/2024.
//

#ifndef VOITURE_H
#define VOITURE_H
#include<bits/stdc++.h>

#include "Vehicule.h"
using namespace std;
class Voiture:Vehicule{
private:
    const int v=120;
public:
    Voiture(int anne,double pri);
    string accelerer() override;
    void aff();


};



#endif //VOITURE_H
