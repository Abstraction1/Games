#ifndef Food_h__
#define Food_h__
#include "GameObjects.h"
/* --------------------------------------------------------------------------*/
/**
 * @Synopsis   										Food Class
 */
/* --------------------------------------------------------------------------*/
class Food: public GameObjects
{
	public:
		Food(): GameObjects() {	}
		Food(const int& xCoord,  const int& yCoord): GameObjects(xCoord, yCoord) {	}
};

#endif //Food_h__
