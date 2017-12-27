#include "room.h"

void TopWall::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void BottomWall::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void LeftWall::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void RightWall::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

void FloorRoom::accept(Visitor &visitor)
{
    visitor.visit(*this);
}

Room::Room() : xLoc_(1),
               yLoc_(1),
               width_(20),
               height_(15)
{
}

void Room::getXY(int &xLoc, int &yLoc)
{
    xLoc = xLoc_;
    yLoc = yLoc_;
}

void Room::getWidthAndHeight(int &w, int &h)
{
    w = width_;
    h = height_;
}

TopWall::TopWall() : Room() {}
BottomWall::BottomWall() : Room() {}
LeftWall::LeftWall() : Room() {}
RightWall::RightWall() : Room() {}
FloorRoom::FloorRoom() : Room() {}
