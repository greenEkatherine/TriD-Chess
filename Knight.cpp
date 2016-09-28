#include "Knight.h"

Knight::Knight(Colours col,Side sd ) : side(sd)
{
	colour = col; 
	if (colour == WHITE) {
		if (side == L) {
			position = Position3D(Position('a', 1), 1);
		}
		else if (side == R) {
			position = Position3D(Position('d', 1), 1);
		}
	}
	else if (colour == BLACK) {
		if (side == L) {
			position = Position3D(Position('a', 8), 5);
		}
		else if (side == R) {
			position = Position3D(Position('d', 8), 5);
		}
	}
};

void Knight::getValidMoves()
{
	// TODO - implement Bishop::getValidMoves
	throw "Not yet implemented";
}

void Knight::move(Position3D newPosition )
{
	// TODO - implement Bishop::move
	throw "Not yet implemented";
}
