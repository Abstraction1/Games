#include "painter.h"
#include "visitor.h"

#include <ncurses.h>

void Painter::visit(TopWall &topwall)
{
    int x, y, _width, _height;
    topwall.getXY(x, y);
    topwall.getWidthAndHeight(_width, _height);

    for (x; x < _width; ++x)
    {
        mvprintw(1, x, "-");
    }
}

void Painter::visit(BottomWall &bottomwall)
{
    int x, y, _width, _height;
    bottomwall.getXY(x, y);
    bottomwall.getWidthAndHeight(_width, _height);

    for (x; x < _width; ++x)
    {
        mvprintw(_height, x, "-");
    }
}

void Painter::visit(LeftWall &leftwall)
{
    int x, y, _width, _height;
    leftwall.getXY(x, y);
    leftwall.getWidthAndHeight(_width, _height);

    for (y; y < _height-1; ++y)
    {
        mvprintw(y+1, x, "|");
    }
    
}
void Painter::visit(RightWall &rightwall)
{
    int x, y, _width, _height;
    rightwall.getXY(x, y);
    rightwall.getWidthAndHeight(_width, _height);

    for (y; y < _height-1; ++y)
    {
        mvprintw(y+1, _width-1, "|");
    }
}
void Painter::visit(FloorRoom &floorrom)
{
    int x, y, _width, _height;
    floorrom.getXY(x, y);
    floorrom.getWidthAndHeight(_width, _height);
    
    for(y; y < _height - 1; ++y) 
    {
        for(x; x < _width - 2; ++x)
        {
            mvprintw(y + 1, x + 1,".");
        }    
        x = 1;
    }
}