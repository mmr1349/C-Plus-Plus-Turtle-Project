#include "pen.h"


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	Pen()
//Purpose:			Default constructor for the Pen class. Sets isUp to true and penTip
//					to 'X'.
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	isUp, penTip
//Data Memebers Modified:	isUp, penTip
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Pen::Pen() {
	isUp = true; //Pen starts out up
	penTip = 'X'; //Default tip is X
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	getPenPsotion()
//Purpose:			Returns the state the pen is in up or down as a bool.
//Parameters:		None
//Return Value:		bool wether the pen is up (true) or down (false)
//Data Members Accessed:	isUp
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
bool Pen::getPenPosition() {
	return isUp; //Return wether or not its up
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	changePenPsotion()
//Purpose:			Toggles the pens position.
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	isUp
//Data Memebers Modified:	isUp
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
void Pen::changePenPosition() {
	isUp = !isUp; //Toggle the isUp variable
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	changePenPosition()
//Purpose:			Returns the drawing tip that the pen currently has
//Parameters:		None
//Return Value:		char the current tip on the pen
//Data Members Accessed:	penTip
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
char Pen::getPenTip() {
	return penTip; //Return the current pen tip
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	setPenTip()
//Purpose:			Sets the pen tip to some new character
//Parameters:		
//	Input:			char newTip any character we would like to use as the tip
//Return Value:		None
//Data Members Accessed:	penTip
//Data Memebers Modified:	penTip
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
void Pen::setPenTip(char newTip) {
	penTip = newTip; //Change the tip
}


/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	~Pen()
//Purpose:			Destructor for the Pen class
//Parameters:		None
//Return Value:		None
//Data Members Accessed:	None
//Data Memebers Modified:	None
//Non-Local Variables Used:	None
//Functions Called:	None
/////////////////////////////////////////////////////////////////////////////////////////
Pen::~Pen() {
	//No pointers nothing to do here
}