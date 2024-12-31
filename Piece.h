#ifndef PIECE_H
#define PIECE_H

#include <iostream>
#include <string>
using namespace std;

class Piece {
protected:
    string couleur;
    int x, y;

public:

    Piece(const string& couleur, int x, int y);


    virtual void deplacer() = 0;  // Déplacement spécifique à chaque pièce
    virtual void afficher() const;


    virtual ~Piece() {}
};

#endif
