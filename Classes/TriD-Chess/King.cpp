#include "King.h"

King::King(Colours col )
{
/*	colour = col;
	Position position2D;
	if (colour == WHITE) {
		position = Position3D(Position('d', 0), 2);
	}
	else if (colour == BLACK) {
		position = Position3D(Position('d', 9), 6);
	}*/
}

void King::isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill)
{
	res = false;
	int diffz = 0;
	Position3D oldPos{ x, y, z };
	//Position3D newPos{newx, newy, newz};
	if ((abs(newx - x) < 2) && (abs(newy - y))
	{
		if (abs(newz - z) > 1)
		{
			diffz = newz - z;
		}

		Position3D newPos{ x != newx ? x + 1 : x, y != newy ? y + 1 : y, z };
		if (!boardState->isPossMove(oldPos, newPos, colour))
		{
			if ((diffz >= 0) && boardState->isPossMove(Position3D{ x, y, z }, Position3D{ x != newx ? x + 1 : x, y != newy ? y + 1 : y, z + 1 }, colour))
			{
				z++;
				if (diffz == 0) { diffz--; }

			}
			else if ((diffz <= 0) && boardState->isPossMove(Position3D{ x, y, z }, Position3D{ x != newx ? x + 1 : x, y != newy ? y + 1 : y, z - 1 }, colour))
			{
				z--;
				if (diffz == 0) { diffz++; }
			}
			else
			{
				return;
			}
		}
		//path->at(i) = Position3D{x != newx ? x + i : x, y != newy ? y + i : y, z != newz ? z + i : z};
		oldPos = newPos;

		if ((abs(diffz) > 2) || ((diffz != 0) && (!boardState->isPossMove(Position3D{ x, y, z }, Position3D{ x != newx ? x + i : x, y != newy ? y + i : y, newz - diffz }, colour)))
		{
			return;
		}
		res = true;
		return;
	}
	res = false;
	return;
}

void King::move(Position3D newPosition )
{
	// TODO - implement Queen::move
	throw "Not yet implemented";
}
