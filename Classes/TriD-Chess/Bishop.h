#ifndef TRIDCHESS_BISHOP_H
#define TRIDCHESS_BISHOP_H
#include <cstdlib>
#include "Side.h"
#include "ChessPiece.h"

class Bishop : public ChessPiece {
private:
	Side side;

public:
	Bishop(Colours col,Side sd);
	void isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill);
	void move(Position3D newPosition);
};
#endif
