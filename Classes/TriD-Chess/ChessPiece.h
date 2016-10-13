#ifndef TRIDCHESS_CHESSPIECE_H
#define TRIDCHESS_CHESSPIECE_H

#include <cstdio>
#include <vector>
#include <memory>
#include <cmath>
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
	explicit ChessPiece(Colours col  ) : colour(col){};
	virtual ~ChessPiece() {};
	Colours getColour() {return colour};
	virtual void isValidMove(int newx, int newy, int newz, bool& res, std::unique_ptr<Board> board, bool kill = false) = 0;
	void move(int newx, int newy, int newz);
};
#endif