#include <cstdlib>
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

void Rook::isValidMove(size_t newx, size_t newy, size_t newz, bool res, std::vector<Position3D>& path)
{
	if((newx != x) && (newy != y) && (newz != z))
    {
        res = false;
    }
    else
    {
        size_t diff = abs(newx - x) + abs(newy - y) + abs(newz - z);
        path.reserve(diff);
        for (size_t i = 0; i < diff)
        {
            path.at(i) = Position3D{x != newx ? x + i : x, y != newy ? y + i : y, z != newz ? z + i : z};
        }
        res = true;
    }
    return;
}

void Rook::move(Position3D newPosition )
{
	// TODO - implement Rook::move
	throw "Not yet implemented";
}
