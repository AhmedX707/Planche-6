//
// Created by Asus on 31/12/2024.
//

#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include "Vecteur.h"


class Vecteur3D :Vecteur{
private:
    double z;
public:
    Vecteur3D();
    Vecteur3D( double x,double y,double z);
    void aff() override;
    void dep(double dx,double dy,double dz);
};



#endif //VECTEUR3D_H
