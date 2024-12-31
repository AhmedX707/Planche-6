#ifndef ROI_H
#define ROI_H
#include "Piece.h"
class Roi : public Piece {
public:
    Roi(const string& couleur, int x, int y);
    void deplacer() override;
    void afficher() const override;
};

#endif
