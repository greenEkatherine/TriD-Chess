#ifndef TRIDCHESS_BOARD_H
#define TRIDCHESS_BOARD_H

#include <array>
#include <map>
#include "Direction.h"
#include "Position3D.h"
#include "ChessPiece.h"
#include "AttackBoard.h"

class Board
{
private:
	static const SIZE_X = 10;
	static const SIZE_Y = 10;
	static const SIZE_Z = 7;
	std::array<std::array<std::array<STATE, 8>, 8>, 7> gameSpace;
	std::map<size_t, ChessPiece *> actualPieces;
    std::map<size_t, Colours> boards;

public:
	virtual ~Board(){};
	unsigned short getLevel(){return level;};
	bool isMovable() {return movable;};
	void moveBoard(Direction directTo);
    bool movePiece(size_t oldx, size_t oldy, size_t oldz, size_t newx, size_t newy, size_t newz, Colours col);
};
#endif
