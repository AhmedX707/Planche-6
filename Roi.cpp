#include "Roi.h"

Roi::Roi(const string& couleur, int x, int y)
    : Piece(couleur, x, y) {}

void Roi::deplacer() {
    int dx,dy;
    cout <<"Entrez les déplacements du roi : ";
    cin>>dx>>dy;
    if (x+dx>=1&&x+dx<=8&&y+dy>=1&&y+dy<=8){
        x+=dx;
        y+=dy;
    } else {
        cout << "Déplacement hors des limites de l'échiquier." << endl;
    }
}
void Roi::afficher() const {
    cout << "Roi ";
    Piece::afficher();
}
