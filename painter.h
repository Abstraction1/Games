#ifndef painter_h__
#define painter_h__

#include "room.h"
#include "visitor.h"

class Painter : public Visitor
{
    public:
        void visit(TopWall& topwall);
        void visit(BottomWall& bottomwall);
        void visit(LeftWall& leftwall);
        void visit(RightWall& rightwall);
        void visit(FloorRoom& floorrom);
};

#endif // painter_h__
