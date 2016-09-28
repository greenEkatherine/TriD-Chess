#ifndef TRIDCHESS_PAWN_H
#define TRIDCHESS_PAWN_H
#include "ChessPiece.h"

class Pawn : public ChessPiece
{

public:
	Pawn(Colours col,Position position2D);
	void getValidMoves();
	void move(Position3D newPosition);
};
#endif
