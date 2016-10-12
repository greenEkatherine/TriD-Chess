#include "Game.h"

void Game::start()
{
	// state boards to start position
	boards.resize(7);
	for (unsigned short i = 1; i < 7; i+2)
	{
        //Board *b = new StableBoard(i);
		boards.at(i) = new StableBoard(i);
	}
    boards.at(0) = new AttackBoard(2, LOWLEFT);
    boards.at(2) = new AttackBoard(2, LOWRIGHT);
    boards.at(4) = new AttackBoard(7, UPLEFT);
    boards.at(6) = new AttackBoard(7, UPRIGHT);

    //state pieces to start position
    //White
    actualPieces.resize(32);
    actualPieces.at(0) = new Rook(WHITE, L);
    actualPieces.at(1) = new Queen(WHITE);
    actualPieces.at(2) = new Knight(WHITE, L);
    actualPieces.at(3) = new Bishop(WHITE, L);
    actualPieces.at(4) = new Bishop(WHITE, R);
    actualPieces.at(5) = new Knight(WHITE, R);
    actualPieces.at(6) = new King(WHITE);
    actualPieces.at(7) = new Rook(WHITE, R);
    //Black
    actualPieces.at(24) = new Rook(BLACK, L);
    actualPieces.at(25) = new Queen(BLACK);
    actualPieces.at(26) = new Knight(BLACK, L);
    actualPieces.at(27) = new Bishop(BLACK, L);
    actualPieces.at(28) = new Bishop(BLACK, R);
    actualPieces.at(29) = new Knight(BLACK, R);
    actualPieces.at(30) = new King(BLACK);
    actualPieces.at(31) = new Rook(BLACK, R);

    actualPieces.at(8) = new Pawn(WHITE, Position('z', 1));
    actualPieces.at(9) = new Pawn(WHITE, Position('a', 1));
    actualPieces.at(16) = new Pawn(BLACK, Position('z', 8));
    actualPieces.at(17) = new Pawn(BLACK, Position('a', 8));
    for (unsigned short i = 0; i < 4; ++i)
    {
        actualPieces.at(i + 10) = new Pawn(WHITE, Position('b' + i, 2));
        actualPieces.at(i + 22) = new Pawn(BLACK, Position('b' + i, 7));
    }
    for (unsigned short i = 0; i < 2; ++i)
    {
        actualPieces.at(i + 14) = new Pawn(WHITE, Position('d' + i, 1));
        actualPieces.at(i + 18) = new Pawn(BLACK, Position('d' + i, 8));
    }
    //first step
    currentPlayer = WHITE;
    return;
}

void Game::end()
{
	// TODO - implement Game::end
	throw "Not yet implemented";
}

void Game::moveBoard(size_t oldx, size_t oldy, size_t oldz, size_t newx, size_t newy, size_t newz)
{
	// TODO - implement Game::moveBoard
	throw "Not yet implemented";
}

void Game::movePiece(size_t oldx, size_t oldy, size_t oldz, size_t newx, size_t newy, size_t newz)
{
    Position3D oldPos = {oldx, oldy, oldz};
    Position3D newPos = {newx, newy, newz};
    if (oldPos.checkBoundaries() && newPos.checkBoundaries()) {
        if (space.isPossMove(oldPos, newPos, currentPlayer)) {
            movingHistory.push(Position3D{newx, newy, newz});
            currentPlayer++;
        }
    }
    return;
}
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
