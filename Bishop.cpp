#include "Bishop.h"

Bishop::Bishop(Colours col,Side sd ) : side(sd)
{
	colour = col;
	if (colour == WHITE) {
		if (side == L) {
			position = Position3D(Position('b', 1), 1);
		}
		else if (side == R) {
			position = Position3D(Position('c', 1), 1);
		}
	}
	else if (colour == BLACK) {
		if (side == L) {
			position = Position3D(Position('b', 8), 5);
		}
		else if (side == R) {
			position = Position3D(Position('c', 8), 5);
		}
	}
};

void Bishop::getValidMoves()
{
	// TODO - implement Bishop::getValidMoves
	throw "Not yet implemented";
}

void Bishop::move(Position3D newPosition )
{
	// TODO - implement Bishop::move
	throw "Not yet implemented";
}
