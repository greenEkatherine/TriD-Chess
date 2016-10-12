#include "ChessPiece.h"

class King : public ChessPiece {

public:
	explicit King(Colours col);
	void isValidMove(size_t newx, size_t newy, size_t newz, bool& res, std::unique_ptr<Board> boardState, bool kill);

	void move(Position3D newPosition);
};
