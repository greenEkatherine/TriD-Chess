<<<<<<< HEAD
#include "StableBoard.h"
#include "Position.h"
#include "Location.h"

StableBoard :: StableBoard(unsigned short lvl ) {
	level = lvl;
	movable = false;
    chessSquares.resize(16);
    Position pos;
    char startLetter = 'a';
    unsigned short startNumber;
    if (lvl == 1) {
        startNumber = 4;
    } else if (lvl == 3) {
        startNumber = 6;
    }
    if (lvl == 5) {
        startNumber = 8;
    }
    unsigned short index = 0;
    for (unsigned short row = startNumber; row > startNumber - 5; --row)
    {
        for (char column = startLetter; column < startLetter + 5; ++column)
        {
            chessSquares.at(index) = Position(column, row);
        }
    }
}
=======
#include "StableBoard.h"
#include "Position.h"
#include "Location.h"

StableBoard :: StableBoard(unsigned short lvl ) {
	level = lvl;
	movable = false;
    chessSquares.resize(16);
    Position pos;
    char startLetter = 'a';
    unsigned short startNumber;
    if (lvl == 1) {
        startNumber = 4;
    } else if (lvl == 3) {
        startNumber = 6;
    }
    if (lvl == 5) {
        startNumber = 8;
    }
    unsigned short index = 0;
    for (unsigned short row = startNumber; row > startNumber - 5; --row)
    {
        for (char column = startLetter; column < startLetter + 5; ++column)
        {
            chessSquares.at(index) = Position(column, row);
        }
    }
}
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
