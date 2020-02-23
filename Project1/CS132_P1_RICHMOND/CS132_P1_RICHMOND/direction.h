/////////////////////////////////////////////////////////////////////////////////////////
//Programmer:	John Marcus Richmond
//Instructor:	Professor Streller
//Course:		CS 132
//Date:			3/7/19
//Class Name:	Direction
//Class File:	direction.h
//Data Elements:enum DIRECTION enum that represents north, east, south, and west.
//				DIRECTION dir store the current DIRECTION
//Structore:	Holds a DIRECTION enum which represents north, east, south, and west.
//Purpose:		Class that can be used to store and track the direction of something
//Other Classes Used:	None
//Data Members:	DIRECTION enum that represents north, east, south, and west.
//				DIRECTION dir dir store the current DIRECTION
//Member Functions:	Direction() Default constructor of the Direction class
//					~Direction() Destructor of the Direction class
//					void rotate90Degrees(bool right) Function to rotate the direction 90 
//					degrees left or right
//					DIRECTION getDirection() Returns the current direction
//					void setDirection(DIRECTION newDir) Sets the direction
/////////////////////////////////////////////////////////////////////////////////////////
#ifndef DIRECTION_H_
#define DIRECTION_H_

class Direction {
public:
	Direction(); //Constructor
	~Direction(); //Destructor
	enum DIRECTION { NORTH, EAST, SOUTH, WEST }; //DIRECTION Enum
	void rotate90Degrees(bool right); //Function to rotate the direction 90 degrees left or right
	DIRECTION getDirection(); //Returns the current direction
	void setDirection(DIRECTION newDir); //Sets the direction
private:
	DIRECTION dir; //Our direction
};
#endif



