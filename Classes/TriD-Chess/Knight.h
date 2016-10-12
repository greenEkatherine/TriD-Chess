#ifndef TRIDCHESS_KNIGHT_H
#define TRIDCHESS_KNIGHT_H
#include "ChessPiece.h"
#include "Side.h"

class Knight : public ChessPiece {
private:
	Side side;

public:
	Knight(Colours col,Side sd);
	void isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill);
	void move(Position3D newPosition);
};
#endif