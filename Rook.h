<<<<<<< HEAD
#ifndef TRIDCHESS_ROOK_H
#define TRIDCHESS_ROOK_H
#include <cstdlib>
#include <array>
#include "ChessPiece.h"
#include "Side.h"

class Rook : public ChessPiece {
private:
	Side side;

public:
	Rook(Colours col,Side sd);
	void isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill);
	void move(Position3D newPosition);
};
#endif
=======
#ifndef TRIDCHESS_ROOK_H
#define TRIDCHESS_ROOK_H
#include <cstdlib>
#include <array>
#include "ChessPiece.h"
#include "Side.h"

class Rook : public ChessPiece {
private:
	Side side;

public:
	Rook(Colours col,Side sd);
	void isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill);
	void move(Position3D newPosition);
};
#endif
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
