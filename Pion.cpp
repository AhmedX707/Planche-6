#include "Pion.h"
Pion::Pion(const string& couleur, int x, int y)
    : Piece(couleur, x, y) {}
void Pion::deplacer() {
    if (y < 8) {
        y++;
    } else {
        cout << "Le pion est à la limite de l'échiquier." << endl;
    }
}
void Pion::afficher() const {
    cout << "Pion ";
    Piece::afficher();
}
