#include "Side.h"
#include "ChessPiece.h"

class Bishop : public ChessPiece {
private:
	Side side;

public:
	Bishop(Colours col,Side sd);
	void isValidMove(size_t newx, size_t newy, size_t newz);
	void move(Position3D newPosition);
};
