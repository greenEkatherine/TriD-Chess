#ifndef TRIDCHESS_GAME_H
#define TRIDCHESS_GAME_H

#include <stack>
#include <map>
#include "StableBoard.h"
#include "AttackBoard.h"
#include "Rook.h"
#include "Queen.h"
#include "Knight.h"
#include "Bishop.h"
#include "King.h"
#include "Pawn.h"
#include "ChessPiece.h"
#include "Board.h"

class Game
{

private:
	Colours currentPlayer;
	std::stack<Position3D> movingHistory;
	Board space;

public:
	void start();
	void end();
	void moveBoard(unsigned short currentLevel);
    void movePiece(size_t oldx, size_t oldy, size_t oldz, size_t newx, size_t newy, size_t newz);
};
#endif