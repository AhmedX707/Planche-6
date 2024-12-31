
#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>
#include <ostream>


class Vecteur {
protected:
    double x{};
    double y{};
public:
    Vecteur(double x1,double x2);
    Vecteur();
    virtual ~Vecteur();
    virtual void aff() ;
    void depl(double dx,double dy);



};



#endif //VECTEUR_H
