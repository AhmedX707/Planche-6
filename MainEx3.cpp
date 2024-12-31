#include "Voiture.h"
#include "Camion.h"
#include <vector>
int main() {
    // Création d'une voiture
    Voiture v1(2023, 50000);
    v1.aff();
    v1.accelerer();
    cout << endl;
    // Création d'un camion
    Camion c1(2020, 80000);
    c1.aff();
    c1.accelerer();
    cout << endl;
    delete &c1;
    delete &v1;
    return 0;
}

