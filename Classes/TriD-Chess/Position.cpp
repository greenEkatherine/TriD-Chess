#include "Position.h"

Position::Position(char ch,unsigned short num ) : letter(ch), number(num)
{
    //make check function
    if ((ch < 'a' || ch > 'e') && (ch < 'A' || ch > 'E') && (ch != 'z' && ch != 'Z'))
    {
        letter = 0;
    }
    if(num > 9)
    {
        number = -1;
    }
}
