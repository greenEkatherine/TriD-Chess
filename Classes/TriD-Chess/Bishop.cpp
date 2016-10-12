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

void Bishop::isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill)
{
    res = false;
    int diffz = 0;
    Position3D oldPos{x, y, z};
    if(abs(newx - x) == abs(newy - y))
    {
        if (abs(newz - z) > 1)
        {
            diffz = newz - z;
        }
        size_t diff = abs(newx - x);
        for (size_t i = 0; i < diff; ++i) {
            Position3D newPos{x += i, y += i, z};
            if (!boardState->isPossMove(oldPos, newPos, colour))
            {
                if ((diffz >= 0) && boardState->isPossMove(oldPos, Position3D{x != newx ? x + i : x, y != newy ? y + i : y, z + 1}, colour)) //или newz?
                {
                    z++;
                    if (diffz == 0) { diffz--; }

                }
                else if ((diffz <= 0) && boardState->isPossMove(oldPos, Position3D{x != newx ? x + i : x, y != newy ? y + i : y, z - 1}, colour))
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
            //newPos or Position3D{x != newx ? x + i : x, y != newy ? y + i : y, z + 1} - debug!
			oldPos = newPos;
        }
		//at this moment should be x == newx, y == newy
        if ((abs(diffz) > 2) || ((diffz != 0) && (!boardState->isPossMove(oldPos, Position3D{newx, newy, newz}, colour))) //newz - diffz
        {
            res = false;
            return;
        }
        res = true;
        return;
    }
    return;
}

void Bishop::move(Position3D newPosition )
{
	// TODO - implement Bishop::move
	throw "Not yet implemented";
}
