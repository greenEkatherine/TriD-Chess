#ifndef TRIDCHESS_CHESSPIECE_H
#define TRIDCHESS_CHESSPIECE_H

#include <cstdio>
#include <vector>
#include <memory>
#include "Colours.h"
#include "Position.h"
#include "Position3D.h"
#include "Board.h"


class ChessPiece
{
protected:
	Colours colour;
	size_t x;
	size_t y;
	size_t z;

public:
    ChessPiece(){};
	explicit ChessPiece(Colours col  ) : colour(col), position(Position(), 0){};
	virtual ~ChessPiece() {};
	Colours getColour() {return colour};
	virtual void isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> board, bool kill = false) = 0;
	void setPosition(size_t newx, size_t newy, size_t newz);
};
#endif