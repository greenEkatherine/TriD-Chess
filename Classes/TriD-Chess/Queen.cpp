<<<<<<< HEAD
#include "Queen.h"

Queen::Queen(Colours col )
{
	colour = col;
	Position position2D;
	if (colour == WHITE) {
			position = Position3D(Position('a', 0), 0);
	}
	else if (colour == BLACK) {
			position = Position3D(Position('a', 9), 4);
	}
}

void Queen::getValidMoves()
{
	// TODO - implement Queen::getValidMoves
	throw "Not yet implemented";
}

void Queen::move(Position3D newPosition )
{
	// TODO - implement Queen::move
	throw "Not yet implemented";
}
=======
#include "Queen.h"

Queen::Queen(Colours col )
{
	colour = col;
	Position position2D;
	if (colour == WHITE) {
			position = Position3D(Position('a', 0), 0);
	}
	else if (colour == BLACK) {
			position = Position3D(Position('a', 9), 4);
	}
}

void Queen::getValidMoves()
{
	// TODO - implement Queen::getValidMoves
	throw "Not yet implemented";
}

void Queen::move(Position3D newPosition )
{
	// TODO - implement Queen::move
	throw "Not yet implemented";
}
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
