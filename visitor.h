#ifndef visitor_h__
#define visitor_h__

class TopWall;
class BottomWall;
class LeftWall;
class RightWall;
class FloorRoom;

class Visitor
{
    public:
        virtual void visit (TopWall& topwall) = 0;
        virtual void visit (BottomWall& bottomwall) = 0;
        virtual void visit (LeftWall& leftwall) = 0;
        virtual void visit (RightWall& rightwall) = 0;
        virtual void visit (FloorRoom& floorroom) = 0;
        virtual ~Visitor() {}
};

#endif// visitor_h__