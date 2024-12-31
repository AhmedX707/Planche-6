#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personne.h"
class Enseignant : virtual public Personne {
private:
    int charge;
public:
    Enseignant(int age,const string& nom,  string sexe, int charge);
    int getCharge() const;
    void setCharge(int charge);
    string getPersonne()  override;
};

#endif
