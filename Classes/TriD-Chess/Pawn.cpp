#include "Pawn.h"

Pawn::Pawn(Colours col,Position position2D )
{
/*	colour = col;
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
	}*/
}

void Pawn::isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill)
{
	res = false;
	int diffz = 0;
	Position3D oldPos{ x, y, z };
	if ((((newx - x == 1) && (colour == WHITE)) || ((newx - x == -1) && (colour == BLACK))) 
		&& (!(abs(newy - y) xor kill))) //0 && 0 or 1 && 1
	{
		if (abs(newz - z) > 1)
		{
			diffz = newz - z;
		}
		Position3D newPos{ newx, newy, z };
		if (!boardState->isPossMove(oldPos, newPos, colour))
		{
			return;
		}
		oldPos = newPos;
		//at this moment should be x == newx, y == newy
		if ((abs(diffz) > 2) || ((diffz != 0) && (!boardState->isPossMove(Position3D{ x, y, z }, Position3D{ newx, newy, newz }, colour))) //newz - diffz
		{
			return;
		}
		res = true;
		return;
	}
	return;
}

void Pawn::move(Position3D newPosition )
{
	// TODO - implement Pawn::move
	throw "Not yet implemented";
}
