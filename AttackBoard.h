#ifndef TRIDCHESS_ATTACKBOARD_H
#define TRIDCHESS_ATTACKBOARD_H


#include <vector>
#include "Board.h"
#include "Location.h"
#include "Position.h"

class AttackBoard : public Board {

private:
    Colours colour;
    Position3D location;

public:
    AttackBoard(Position3D loc, Colours col) : colour(col), location(loc) {};
    void setLocation(Location newLocation  ) {location = newLocation;};
    unsigned short getColour(){return colour;};
    Location getLocation(){return location;};
    bool isMovable() const {return movable;};
	void moveBoard(Direction directTo  ) {};
};


#endif //TRIDCHESS_ATTACKBOARD_H
