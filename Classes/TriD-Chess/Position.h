<<<<<<< HEAD
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
=======
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
>>>>>>> 84362c06f182b0570e36132f075d4b62e73aa0cf
