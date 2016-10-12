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

//size_t make unsigned? Check!
void Knight::isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill)
{
	res = false;
	int diffz = 0;
	Position3D oldPos{ x, y, z };
	if ((newx - x) && (abs(newx - x) + abs(newy - y) == 3))
	{
		if (abs(newz - z) > 1)
		{
			diffz = newz - z;
		}
		Position3D newPos{newx, newy, z};
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

void Knight::move(Position3D newPosition )
{
	// TODO - implement Bishop::move
	throw "Not yet implemented";
}
