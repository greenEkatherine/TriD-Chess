#include <typeinfo>
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

bool Board::movePiece(size_t oldx, size_t oldy, size_t oldz, size_t newx, size_t newy, size_t newz, const Colours col)
{
    if (((col == WHITE) && (gameSpace[oldx][oldy][oldz] == BLACK_OCCUPIED)
         || ((col == BLACK) && (gameSpace[oldx][oldy][oldz] == WHITE_OCCUPIED))
    {
        return false;
    }
    if ((gameSpace[oldx][oldy][oldz] == INVALID) || (gameSpace[oldx][oldy][oldz] == EMPTY))
    {
        return false;
    }
    if ((gameSpace[newx][newy][newz] == INVALID) || (gameSpace[newx][newy][newz] == gameSpace[oldx][oldy][oldz]))
    {
        return false;
    }
    auto current = actualPieces.find(oldx * SIZE_Y * SIZE_Z + oldy * SIZE_Z + oldz);
    if (current != actualPieces.end()) //лишнее условие?
    {
        bool valid = false;
        std::vector<Position3D> path;
        current->second->isValidMove(newx, newy, newz, &valid, path);
        if (valid)
        {
            for (Position3D pos : path)
            {
                if ((gameSpace.[pos._x][pos._y][pos._z] != EMPTY) &&(gameSpace.[pos._x][pos._y][pos._z - 1] != EMPTY)
                    && gameSpace.[pos._x][pos._y][pos._z + 1] != EMPTY))
                {
                    return false;
                }
            }
            auto looser = actualPieces.find(newx * SIZE_Y * SIZE_Z + newy * SIZE_Z + newz);
            if ((looser != actualPieces.end()) && (looser->second->getColour != current->second->getColour)) { //второе условие лишнее
                actualPieces.erase(looser);
            }
            current->second->setPosition(newx, newy, newz);
            return true;
        }
    }
    return false;
}