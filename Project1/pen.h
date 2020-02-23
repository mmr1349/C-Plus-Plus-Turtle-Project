/////////////////////////////////////////////////////////////////////////////////////////
//Programmer:	John Marcus Richmond
//Instructor:	Professor Streller
//Course:		CS 132
//Date:			3/7/19
//Class Name:	Pen
//Class File:	pen.h
//Data Elements:char penTip the current chracter that is being used as the tip of the pen.
//				bool isUp bool that stores wether the pen is up or down.
//Structore:	Just contains a couple values and then getters and setter for them. Not too
//				complicated.
//Other Classes Used:None
//Purpose:		This class contains a penTip member which can be used to write on a grid
//				or really whatever you want to and a bool to control wether it should write
//				or not. These are accessed by getters and set by setters.
//Data Members:	char penTip the current chracter that is being used as the tip of the pen.
//				bool isUp bool that stores wether the pen is up or down.
//Member Functions:	Pen() Default contructor for the pen class.
//					~Pen() Default destructor for the pen class.
//					bool getPenPosition() Returns the current position of the pen up or down.
//					void changePenPosition() Toggles the pens position true up false down.
//					char getPenTip() Returns the current pen tip character.
//					void setPenTip(char) Sets the pen tip to some new character.
/////////////////////////////////////////////////////////////////////////////////////////
#ifndef PEN_H_
#define PEN_H_

class Pen {
public:
	Pen(); //Constructor
	~Pen(); //Destructor
	bool getPenPosition(); //Returns the current position up or down
	void changePenPosition(); //Toggles the pens position
	char getPenTip(); //Returns the current pen tip
	void setPenTip(char); //Sets the pen tip to some new char
private:
	char penTip; //The char that stores the tip character
	bool isUp; //The bool signifying whether the pen is up or down
};

#endif
