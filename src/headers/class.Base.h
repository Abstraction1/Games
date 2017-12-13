#ifndef CLASS_BASE_H
#include "interface.GameObject.h"

class Base : public IGameObject {
public:
	Base ();
	Base ( const int&, const int& );
	void getCoords ( int&, int& );
protected:
	int xCoord_;
	int yCoord_;
};

#endif // CLASS_FOOD_H