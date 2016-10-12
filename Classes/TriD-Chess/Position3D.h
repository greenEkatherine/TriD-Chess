#ifndef TRIDCHESS_POSITION3D_H
#define TRIDCHESS_POSITION3D_H


#include <cstdio>

enum STATE{
    INVALID;
    EMPTY;
    WHITE_OCCUPIED;/*PAWN;
    WHITE_ROOK;
    WHITE_BISHOP;
    WHITE_KNIGHT;
    WHITE_QUEEN;
    WHITE_KING;*/
    BLACK_OCCUPIED;/*PAWN;
    BLACK_ROOK;
    BLACK_BISHOP;
    BLACK_KNIGHT;
    BLACK_QUEEN;
    BLACK_KING;*/

};

struct Position3D {
    size_t _x;
    size_t _y;
    size_t _z;

    bool checkBoundaries() { return ((_x < 8) && (_y < 8) && (_z < 7)); };
};


#endif //TRIDCHESS_POSITION3D_H
