#ifndef Snake_h__
#define Snake_h__
#include "GameObjects.h"
/* --------------------------------------------------------------------------*/
/**
 * @Synopsis										Snake class
 */
/* --------------------------------------------------------------------------*/
class Snake: public GameObjects 
{
	public:
		Snake(): GameObjects() {	}
		Snake(const int& xCoord, const int& yCoord): GameObjects(xCoord, yCoord) {	}
};
#endif //Snake_h__
