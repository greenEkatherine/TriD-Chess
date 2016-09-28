#ifndef TRIDCHESS_KNIGHT_H
#define TRIDCHESS_KNIGHT_H
#include "ChessPiece.h"
#include "Side.h"

class Knight : public ChessPiece {
private:
	Side side;

public:
	Knight(Colours col,Side sd);
	void getValidMoves();
	void move(Position3D newPosition);
};
#endif