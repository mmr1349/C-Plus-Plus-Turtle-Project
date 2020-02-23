/////////////////////////////////////////////////////////////////////////////////////////
//Programmer:	John Marcus Richmond
//Instructor:	Professor Streller
//Course:		CS 132
//Date:			3/7/19
//Class Name:	Turtle
//Class File:	turtle.h
//Data Elements:const unsigned char turtleCharacter the variable that holds the visual
//				representation of the turtle. Const so it isn't changed. Unsigned so it
//				can store and represent extended ASCII characters.
//Structure:	Is a caontainer for several class objects that when combined together
//				creates all the functionality needed for a turtle. Accessing these
//				memebers is done through getter functions there are no setters because
//				that is outside the use case of the turtle.
//Purpose:		Turtle class we are using to draw on a grid but could be used for
//				something else if you really wanted to. Has a Pen, Direction, and
//				Position object. Can't actually see the values they have must use
//				code somewhere else to do that, but it does return a reference to them
//				so accessing them isn't hard.
//Other Classes Used:	Pen, Direction, Position
//Data Memebers:Position pos Position object we use to store and change the position of
//				the Turtle with.
//				Direction dir Direction object we use to store and change the direction
//				of the Turtle
//				Pen pen Pen object we use to store the current character we are drawing
//				with and wether or not the pen is in write mode or not.
//				const unsigned char turtleCharacter the variable that holds the visual
//				representation of the turtle. Const so it isn't changed. Unsigned so it
//				can store and represent extended ASCII characters.
//Member Functions:	Turtle() Default constructor for the class
//					~Turtle() Destructor for the class
//					Pen& getPen() Return a referance to the pen data member
//					Direction& getDir() Return a referance to the dir data member
//					Position& getPos() Return a referance to the pos data member
//					unsigned char getTurtleCharacter() Returns the turtleCharacter data
//					member.
/////////////////////////////////////////////////////////////////////////////////////////

#ifndef TURTLE_H_
#define TURTLE_H_

#include "direction.h"
#include "pen.h"
#include "position.h"

class Turtle {
	public:
		Turtle(); //Constructor
		~Turtle(); //Destructor
		Pen& getPen(); //Return a referance to the Pen
		Direction& getDir(); //Return a referance to the Direction
		Position& getPos(); //Return a referance to the Position
		unsigned char getTurtleCharacter(); //Returns the turtle character
		
	private:
		Position pos; //Our Position
		Direction dir; //Our Direction
		Pen pen; //Our Pen
		const unsigned char turtleCharacter = 232; //Turtle character looks like Φ
};
#endif
