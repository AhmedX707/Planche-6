#include "Enseignant.h"

// Constructeur
/**
 *
 * @param age
 * @param nom
 * @param sexe
 * @param charge
 */
Enseignant::Enseignant( int age,const string& nom, string sexe, int charge)
    : Personne(age, nom, sexe), charge(charge) {}

// Accesseur et modificateur
int Enseignant::getCharge() const { return charge; }
void Enseignant::setCharge(int charge) { this->charge = charge; }


string Enseignant::getPersonne()  {
    return Personne::getPersonne() + ", Charge: " + to_string(charge) + " heures";
}
