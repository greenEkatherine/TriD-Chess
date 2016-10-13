#include "Queen.h"

Queen::Queen(Colours col )
{
/*	colour = col;
	Position position2D;
	if (colour == WHITE) {
			position = Position3D(Position('a', 0), 0);
	}
	else if (colour == BLACK) {
			position = Position3D(Position('a', 9), 4);
	}*/
}

void Queen::isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill)
{
	res = false;
	int diffz = 0;
	Position3D oldPos{ x, y, z };
	//Position3D newPos{newx, newy, newz};
	if (((newx == x) xor (newy == y)) || abs(newx - x) == abs(newy - y))
	{
		if (abs(newz - z) > 1)
		{
			diffz = newz - z;
		}
		size_t diff = abs(newx - x);
		if (!diff)
		{
			diff = abs(newy - y);
		}
		for (size_t i = 0; i < diff; ++i) {
			Position3D newPos{ x != newx ? x + i : x, y != newy ? y + i : y, z };
			if (!boardState->isPossMove(oldPos, newPos, colour))
			{
				if ((diffz >= 0) && boardState->isPossMove(Position3D{ x, y, z }, Position3D{ x != newx ? x + i : x, y != newy ? y + i : y, z + 1 }, colour))
				{
					z++;
					if (diffz == 0) { diffz--; }

				}
				else if ((diffz <= 0) && boardState->isPossMove(Position3D{ x, y, z }, Position3D{ x != newx ? x + i : x, y != newy ? y + i : y, z - 1 }, colour))
				{
					z--;
					if (diffz == 0) { diffz++; }
				}
				else
				{
					res = false;
					return;
				}
			}
			//path->at(i) = Position3D{x != newx ? x + i : x, y != newy ? y + i : y, z != newz ? z + i : z};
			oldPos = newPos;
		}
		if ((abs(diffz) > 2) || ((diffz != 0) && (!boardState->isPossMove(Position3D{ x, y, z }, Position3D{ x != newx ? x + i : x, y != newy ? y + i : y, newz}, colour)))
		{
			res = false;
			return;
		}
		res = true;
		return;
	}
	res = false;
	return;
}

void Queen::move(Position3D newPosition )
{
	// TODO - implement Queen::move
	throw "Not yet implemented";
}
