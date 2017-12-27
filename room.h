#ifndef room_h__
#define room_h__
#include "visitor.h"
#include "painter.h"

class Room
{
  public:
    Room();
    void getXY(int &xLoc, int &yLoc);
    void getWidthAndHeight(int &w, int &h);
    virtual void accept(Visitor &visitor) = 0;
    virtual ~Room() {}

  protected:
    int xLoc_;
    int yLoc_;
    int width_;
    int height_;
};

class TopWall : public Room
{
  public:
    TopWall();
    void accept(Visitor &visitor);
};

class BottomWall : public Room
{
  public:
    BottomWall();
    void accept(Visitor &visitor);
};

class LeftWall : public Room
{
  public:
    LeftWall();
    void accept(Visitor &visitor);
};

class RightWall : public Room
{
  public:
    RightWall();
    void accept(Visitor &visitor);
};

class FloorRoom : public Room
{
  public:
    FloorRoom();
    void accept(Visitor &visitor);
};

#endif // room_h__