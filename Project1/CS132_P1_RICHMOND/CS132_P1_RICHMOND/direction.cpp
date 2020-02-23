#include "direction.h"

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	Direction()
//Purpose:			Default constructor for the DIrection class. Sets dir to EAST.
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	dir
//Data Memebers Modified:	dir
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Direction::Direction() {
	dir = EAST; //Default direction is EAST
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	rotate90Degrees()
//Purpose:			Rotates our current direction 90 degrees either left or right
//Parameters:
//	Input:			bool right are we rotatin right or left?
//Return Value:		None
//Data Members Accessed:	dir
//Data Memebers Modified:	dir
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
void Direction::rotate90Degrees(bool right) {
	if (right) { //If we are rotating 90 degrees to the right
		if (dir == 3) { //If its 3 loop around 0
			dir = static_cast<DIRECTION>(0);
		} else { //Otherwise just add 1 to the dir enum
			dir = static_cast<DIRECTION>(dir+1);
		}
	} else { //Else we are rotating 90 degrees to the left
		if (dir == 0) { //If its 0 loop around to 3
			dir = static_cast<DIRECTION>(3);
		} else { //Else subtract 1 from the dir enum
			dir = static_cast<DIRECTION>(dir-1);
		}
	}
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	SetDirection()
//Purpose:			Sets dir to some new DIRECTION
//Parameters:
//	Input:			DIRECTION newDir our new DIRECTIONs
//Return Value:		None
//Data Members Accessed:	dir
//Data Memebers Modified:	dir
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
void Direction::setDirection(Direction::DIRECTION newDir) {
	dir = newDir; //Set the dir to the newDir
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getDirection()
//Purpose:			Returns our current dir
//Parameters:		None
//Return Value:		DIRECTION our current DIRECTION
//Data Members Accessed:	dir
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Direction::DIRECTION Direction::getDirection() {
	return dir; //Return the dir
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	~Direction()
//Purpose:			Destructor for the Direction class
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	None
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Direction::~Direction() {
	//Nothing to do here no pointers or anything
}