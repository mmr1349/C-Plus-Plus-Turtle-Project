#include "position.h"

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	Position()
//Purpose:			Default constructor for the Position class. Simply sets the x and
//					y to 0.
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	x, y
//Data Memebers Modified:	x, y
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Position::Position() {
	x = 0; //Default position to 0, 0
	y = 0;
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getXPos()
//Purpose:			Returns the x position
//Parameters:		None
//Return Value:		int the x coordinate
//Data Members Accessed:	x
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
int Position::getXPos() {
	return x; //Return the x coordinate
}

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getYPos()
//Purpose:			Returns the y position
//Parameters:		None
//Return Value:		int the y coordinate
//Data Members Accessed:	y
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
int Position::getYPos() {
	return y; //Return the y coordinate
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	setPos()
//Purpose:			Sets the x and y position to input newX and newY.
//Parameters:
//	Input: int newX new x coordinate, int newY new y coordinate
//Return Value:		int the x coordinate
//Data Members Accessed:	x, y
//Data Memebers Modified:	x, y
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
void Position::SetPos(int newX, int newY) {
	x = newX; //Set x to newX
	y = newY; //Set y to newY
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	~Position()
//Purpose:			Destructor for the Position class.
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	None
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Position::~Position() {
	//Nothing to do here
}