#include "ChessPiece.h"

class King : public ChessPiece {

public:
	explicit King(Colours col);
	void getValidMoves();

	void move(Position3D newPosition);
};
