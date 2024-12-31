#ifndef PION_H
#define PION_H
#include "Piece.h"
class Pion : public Piece {
public:
    Pion(const string& couleur, int x, int y);
    void deplacer() override;
    void afficher() const override;
};
#endif
