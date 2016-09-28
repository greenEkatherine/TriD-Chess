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
	if((newx == x) xor (newy == y) xor (newz == z)) //true only if one statement is true
	{
		res = true;
		if (path)
		{
			size_t diff = abs(newx - x) + abs(newy - y) + abs(newz - z);
			path->reserve(diff);
			for (size_t i = 0; i < diff; ++i) {
				path->at(i) = Position3D{x != newx ? x + i : x, y != newy ? y + i : y, z != newz ? z + i : z};
			}
		}
	}
	return;
}
void Bishop::move(Position3D newPosition )
{
	// TODO - implement Bishop::move
	throw "Not yet implemented";
}
