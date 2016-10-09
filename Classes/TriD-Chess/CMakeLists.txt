cmake_minimum_required(VERSION 3.6)
project(TriDChess)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        Bishop.cpp
    Bishop.h
        Board.h
    ChessPiece.cpp
    ChessPiece.h
        Colours.h
    Direction.h
    Game.cpp
    Game.h
    King.cpp
    King.h
    Knight.cpp
    Knight.h
    Pawn.cpp
    Pawn.h
    Queen.cpp
    Queen.h
    Rook.cpp
    Rook.h
        Board.cpp StableBoard.h AttackBoard.cpp AttackBoard.h Location.h Position.cpp Position.h StableBoard.cpp Position3D.h Side.h)

add_executable(TriDChess ${SOURCE_FILES})