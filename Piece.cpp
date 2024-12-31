#include "Piece.h"
Piece::Piece(const string& couleur, int x, int y)
    : couleur(couleur), x(x), y(y) {}

void Piece::afficher() const {
    cout << "Type: " << typeid(*this).name()  // Nom du type (Pion ou Roi)
         << ", Couleur: " << couleur
         << ", Position: (" << x << ", " << y << ")" << endl;
}
