<<<<<<< HEAD
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
=======
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
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
