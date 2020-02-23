#include "turtle.h"


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	Turtle()
//Purpose:			Default constructor for the Turtle class
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	None
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Turtle::Turtle() {
	//Nothing to do here only variable turtle has is a const
}

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getTurtleCharacter()
//Purpose:			Return the character we use as the visual representation of our
//					turtle
//Parameters:		None
//Return Value:		unsinged char, the turtles character
//Data Members Accessed:	turtleCharacter
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
unsigned char Turtle::getTurtleCharacter() {
	return turtleCharacter; //Return the turtle symbol
}

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getPen()
//Purpose:			Returns a referance to the turtles Pen
//Parameters:		None
//Return Value:		Pen& the turtles pen
//Data Members Accessed:	pen
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Pen& Turtle::getPen() {
	return pen; //Return a referance to our pen
}

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getDir()
//Purpose:			Returns a referance to the turtles Direction
//Parameters:		None
//Return Value:		Direction& the turtles Direction
//Data Members Accessed:	dir
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Direction& Turtle::getDir() {
	return dir; //Return a referance to our direction
}

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getPos()
//Purpose:			Returns a referance to the turtles Position
//Parameters:		None
//Return Value:		Position& the turtles Position
//Data Members Accessed:	pos
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Position& Turtle::getPos() {
	return pos; //Return a referance to our Position
}

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	~Turtle()
//Purpose:			Destructor for the Turtle class. Doesn't actaully do anything since
//					it doesn't have to.
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	None
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Turtle::~Turtle() {
	//No pointers or dynamic memory allocation nothing to do here
}