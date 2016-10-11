<<<<<<< HEAD
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
=======
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
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
#endif