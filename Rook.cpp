#include "Rook.h"

Rook::Rook(Colours col,Side sd ) : side(sd)
{
	colour = col;
	Position position2D;
	if (colour == WHITE) {
        if (side == L) {
            position = Position3D(Position('z', 0), 0);
        }
        else if (side == R) {
            position = Position3D(Position('e', 0), 2);
        }
	}
	else if (colour == BLACK) {
        if (side == L) {
            position = Position3D(Position('z', 9), 4);
        }
        else if (side == R) {
            position = Position3D(Position('e', 9), 6);
        }
	}
};

void Rook::isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill)
{
    res = false;
    int diffz = 0;
    Position3D oldPos{x, y, z};
    //Position3D newPos{newx, newy, newz};
	if((newx == x) xor (newy == y)) //true only if one statement is true
    {
        if (abs(newz - z) > 1)
        {
            diffz = newz - z;
        }
        size_t diff = abs(newx - x) + abs(newy - y);
        for (size_t i = 0; i < diff; ++i) {
            Position3D newPos{x != newx ? x + i : x, y != newy ? y + i : y, z};
            if (!boardState->isPossMove(oldPos, newPos, colour))
            {
                if ((diffz >= 0) && boardState->isPossMove(Position3D{x, y, z}, Position3D{x != newx ? x + i : x, y != newy ? y + i : y, newz + 1}, colour))
                {
                    z++;
                    if (diffz == 0) { diffz--; }

                }
                else if ((diffz <= 0) && boardState->isPossMove(Position3D{x, y, z}, Position3D{x != newx ? x + i : x, y != newy ? y + i : y, newz - 1}, colour))
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
        if ((abs(diffz) > 1) || ((diffz != 0) && (!boardState->isPossMove(Position3D{x, y, z}, Position3D{x != newx ? x + i : x, y != newy ? y + i : y, newz - diffz}, colour)))
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

void Rook::move(Position3D newPosition )
{
	// TODO - implement Rook::move
	throw "Not yet implemented";
}
