#ifndef TRIDCHESS_POSITION_H
#define TRIDCHESS_POSITION_H


#include <cstdio>

class Position {
private:
    size_t x;
    size_t y;
public:
    Position() : letter(0), number(-1){};
    Position(char ch,unsigned short num);
    char getLetter() const {return letter;};
};


#endif //TRIDCHESS_POSITION_H
