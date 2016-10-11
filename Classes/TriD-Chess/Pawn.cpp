<<<<<<< HEAD
#include "Pawn.h"

Pawn::Pawn(Colours col,Position position2D )
{
	colour = col;
	if (colour == WHITE) {
		if (position2D.getLetter() == 'z' || position2D.getLetter() == 'a') {
			Position3D position(position2D, 0);
		}
		else if (position2D.getLetter() == 'd' || position2D.getLetter() == 'e') {
			Position3D position(position2D, 2);
		} else
		{
			Position3D position(position2D, 1);
		}
	}else if (colour == BLACK)
	{
		if (position2D.getLetter() == 'z' || position2D.getLetter() == 'a') {
			Position3D position(position2D, 4);
		}
		else if (position2D.getLetter() == 'd' || position2D.getLetter() == 'e') {
			Position3D position(position2D, 6);
		} else
		{
			Position3D position(position2D, 5);
		}
	}
}

void Pawn::getValidMoves()
{
	// TODO - implement Pawn::getValidMoves
	throw "Not yet implemented";
}

void Pawn::move(Position3D newPosition )
{
	// TODO - implement Pawn::move
	throw "Not yet implemented";
}
=======
#include "Pawn.h"

Pawn::Pawn(Colours col,Position position2D )
{
	colour = col;
	if (colour == WHITE) {
		if (position2D.getLetter() == 'z' || position2D.getLetter() == 'a') {
			Position3D position(position2D, 0);
		}
		else if (position2D.getLetter() == 'd' || position2D.getLetter() == 'e') {
			Position3D position(position2D, 2);
		} else
		{
			Position3D position(position2D, 1);
		}
	}else if (colour == BLACK)
	{
		if (position2D.getLetter() == 'z' || position2D.getLetter() == 'a') {
			Position3D position(position2D, 4);
		}
		else if (position2D.getLetter() == 'd' || position2D.getLetter() == 'e') {
			Position3D position(position2D, 6);
		} else
		{
			Position3D position(position2D, 5);
		}
	}
}

void Pawn::getValidMoves()
{
	// TODO - implement Pawn::getValidMoves
	throw "Not yet implemented";
}

void Pawn::move(Position3D newPosition )
{
	// TODO - implement Pawn::move
	throw "Not yet implemented";
}
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
