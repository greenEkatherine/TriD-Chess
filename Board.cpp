#include <typeinfo>
#include <memory>
#include "Board.h"
#include "Pawn.h"

bool Board::moveBoard(size_t oldx, size_t oldy, size_t oldz, size_t newx, size_t newy, size_t newz, const Colours col)
{
    if (col != boards.at(Position3D{oldx, oldy, oldz}).getColour())
    {
        return false;
    }
    size_t counter = 0;
    for (size_t i = 0; i < 2; ++i)
    {
        for (size_t j = 0; j < 2; ++j)
        {
            auto current = actualPieces.find((oldx + i) * SIZE_Y * SIZE_Z + (oldy + j) * SIZE_Z + oldz);
            if ( current != actualPieces.end())
            {
                if ((typeid( *(current->second) ) == typeid(Pawn)) && (current->second->getColour() == col))
                {
                    ++counter;
                }
                else
                {
                    return false;
                }
            }
            if (counter > 1)
            {
                return false;
            }
        }
    }

    if (boards.find(oldx * SIZE_Y * SIZE_Z + oldy * SIZE_Z + oldz) != boards.end())
    {
        return false;
    }
}

//TODO set Position3D instead coordinates
bool Board::isPossMove(Position3D oldPos, Position3D newPos, const Colours col)
{
    bool kill = false;
    //player does not choose his/her piece
    if (((col == WHITE) && (gameSpace[oldPos._x][oldPos._y][oldPos._z] != WHITE_OCCUPIED))
         || ((col == BLACK) && (gameSpace[oldPos._x][oldPos._y][oldPos._z] != BLACK_OCCUPIED)))
    {
        return false;
    }

    //chess square is the same or is not present
    if ((gameSpace[newPos._x][newPos._y][newPos._z] == INVALID) || (gameSpace[newPos._x][newPos._y][newPos._z] == gameSpace[oldPos._x][oldPos._y][oldPos._z]))
    {
        return false;
    }

    if (gameSpace[newPos._x][newPos._y][newPos._z] != EMPTY)
    {
        if (gameSpace[newPos._x][newPos._y][newPos._z] == INVALID)
        {
            return false;
        }
        else if (((col == WHITE) && (gameSpace[newPos._x][newPos._y][newPos._z] != BLACK_OCCUPIED))
             || ((col == BLACK) && (gameSpace[newPos._x][newPos._y][newPos._z] != WHITE_OCCUPIED))) {
            return false;
        }
        else
        {
            kill = true;
        }
    }

    auto current = actualPieces.find(oldPos._x * SIZE_Y * SIZE_Z + oldPos._y * SIZE_Z + oldPos._z);
    if (current != actualPieces.end()) //лишнее условие?
    {
        bool valid = false;
        std::unique_ptr<Board> boardState = this;
        current->second->isValidMove(newPos._x, newPos._y, newPos._z, valid, boardState, kill);
        if (valid)
        {
            return true;
        }
    }
    return false;
}