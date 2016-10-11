<<<<<<< HEAD
#include "ChessPiece.h"

class Queen : public ChessPiece {

public:
	explicit Queen(Colours col);
	void getValidMoves();

	void move(Position3D newPosition);
};
=======
#include "ChessPiece.h"

class Queen : public ChessPiece {

public:
	explicit Queen(Colours col);
	void getValidMoves();

	void move(Position3D newPosition);
};
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
