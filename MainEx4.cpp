#include "Pion.h"
#include "Roi.h"
#include <vector>

int main() {

    vector<Piece*> pieces;

    pieces.push_back(new Pion("blanc", 2, 2));
    pieces.push_back(new Pion("noir", 4, 5));
    pieces.push_back(new Pion("blanc", 7, 7));

    pieces.push_back(new Roi("noir", 5, 5));
    cout << "Avant déplacement :" << endl;
    for (Piece* piece : pieces) {
        piece->afficher();
    }
    cout << "\nDéplacements :" << endl;
    for (Piece* piece : pieces) {
        piece->deplacer();
    }
    cout << "\nAprès déplacement :" << endl;
    for (Piece* piece : pieces) {
        piece->afficher();
    }

    for (Piece* piece : pieces) {
        delete piece;
    }

    return 0;
}
