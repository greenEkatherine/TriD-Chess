#include "ChessPiece.h"

class Queen : public ChessPiece {

public:
	explicit Queen(Colours col);
	void getValidMoves();

	void move(Position3D newPosition);
};
