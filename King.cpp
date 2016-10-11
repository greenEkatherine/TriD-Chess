<<<<<<< HEAD
#include "King.h"

King::King(Colours col )
{
	colour = col;
	Position position2D;
	if (colour == WHITE) {
		position = Position3D(Position('d', 0), 2);
	}
	else if (colour == BLACK) {
		position = Position3D(Position('d', 9), 6);
	}
}

void King::getValidMoves()
{
	// TODO - implement Queen::getValidMoves
	throw "Not yet implemented";
}

void King::move(Position3D newPosition )
{
	// TODO - implement Queen::move
	throw "Not yet implemented";
}
=======
#include "King.h"

King::King(Colours col )
{
	colour = col;
	Position position2D;
	if (colour == WHITE) {
		position = Position3D(Position('d', 0), 2);
	}
	else if (colour == BLACK) {
		position = Position3D(Position('d', 9), 6);
	}
}

void King::getValidMoves()
{
	// TODO - implement Queen::getValidMoves
	throw "Not yet implemented";
}

void King::move(Position3D newPosition )
{
	// TODO - implement Queen::move
	throw "Not yet implemented";
}
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
