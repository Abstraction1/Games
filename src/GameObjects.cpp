#include "GameObjects.h"

GameObjects::GameObjects(): xCoord_(0), yCoord_(0) {	}

GameObjects::GameObjects(const int& xCoord, const int& yCoord):
	xCoord_(xCoord), yCoord_(yCoord) {	}

void GameObjects::getXY(int& xCoord,  int& yCoord)
{
	xCoord = xCoord_;
	yCoord = yCoord_; 
}

void GameObjects::setXY(const int& xCoord, const int& yCoord)
{
	xCoord_ = xCoord;
	yCoord_ = yCoord; 
}
/**
 * @file GameObjects.cpp
 * @Synopsis  
 * @author default
 * @version default
 * @date 2017-12-21
 */

