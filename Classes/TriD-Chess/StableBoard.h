<<<<<<< HEAD
#ifndef TRIDCHESS_STABLEBOARD_H
#define TRIDCHESS_STABLEBOARD_H

#include <vector>
#include "Board.h"
#include "Position.h"

class StableBoard : public Board {

private:
	std::vector<Position> chessSquares;

public:
    StableBoard(unsigned short lvl);
    unsigned short getLevel() const {return level;};
    bool isMovable() const {return movable;};
	void moveBoard(Direction directTo  ) {};
};


#endif //TRIDCHESS_STABLEBOARD_H
=======
#ifndef TRIDCHESS_STABLEBOARD_H
#define TRIDCHESS_STABLEBOARD_H

#include <vector>
#include "Board.h"
#include "Position.h"

class StableBoard : public Board {

private:
	std::vector<Position> chessSquares;

public:
    StableBoard(unsigned short lvl);
    unsigned short getLevel() const {return level;};
    bool isMovable() const {return movable;};
	void moveBoard(Direction directTo  ) {};
};


#endif //TRIDCHESS_STABLEBOARD_H
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
