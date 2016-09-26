#ifndef TRIDCHESS_ROOK_H
#define TRIDCHESS_ROOK_H
#include "ChessPiece.h"
#include "Side.h"

class Rook : public ChessPiece {
private:
	Side side;

public:
	Rook(Colours col,Side sd);
	void isValidMove(size_t newx, size_t newy, size_t newz, bool res);
	void move(Position3D newPosition);
};
#endif
