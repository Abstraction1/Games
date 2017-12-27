#ifndef roomfactory_h__
#define roomfactory_h__
#include "room.h"

class Factory
{
    public:
        virtual Room* createRoom() = 0;
        virtual ~Factory() {}
};

class TopWallFactory : public Factory
{
    public:
        Room* createRoom() { return new TopWall; }
};

class BottomWallFactory : public Factory
{
    public:
        Room* createRoom() { return new BottomWall; }
};

class LeftWallFactory : public Factory
{
    public:
        Room* createRoom() { return new LeftWall; }
};

class RightWallFactory : public Factory
{
    public:
        Room* createRoom() { return new RightWall; }
};

class FloorRoomFactory : public Factory
{
    public:
        Room* createRoom() { return new FloorRoom; }
};

#endif // roomfactory_h__