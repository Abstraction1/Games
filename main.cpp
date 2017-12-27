#include <ncurses.h>
#include <vector>

#include "roomFactory.h"
#include "room.h"

int main()
{
    initscr();
    noecho();
    refresh();

    Painter painter;
    std::vector<Room* > level;
    
    Factory* topWall = new TopWallFactory;
    Factory* bottomWall = new BottomWallFactory;
    Factory* leftWall = new LeftWallFactory;
    Factory* rightWall = new RightWallFactory;
    Factory* floorRoom = new FloorRoomFactory;
    
    level.push_back(topWall->createRoom());
    level.push_back(bottomWall->createRoom());
    level.push_back(leftWall->createRoom());
    level.push_back(rightWall->createRoom());
    level.push_back(floorRoom->createRoom());

    std::vector<Room* >::iterator it = level.begin();
    std::vector<Room* >::iterator end = level.end();

    while(it != end)
    {
        (*it)->accept(painter);
        ++it;
    }


    getch();
    endwin();
    return 0;
}