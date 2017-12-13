#include "headers/class.Base.h"

Base::Base () : 
xCoord_ ( 0 ), 
yCoord_ ( 0 )
{ }

Base::Base ( const int& xCoord, const int& yCoord ) : 
xCoord_ ( xCoord ), 
yCoord_ ( yCoord )
{ }

void Base::getCoords ( int& xValue, int& yValue ) {
	xValue = xCoord_;
	yValue = yCoord_;
}