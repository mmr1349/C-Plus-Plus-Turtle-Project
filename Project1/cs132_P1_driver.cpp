/////////////////////////////////////////////////////////////////////////////////////////
//Programmer:	John Marcus Richmond
//Date:			3/7/19
//Program Name:	Project 1 Driver
//Program File:	cs132_P1_driver.cpp
//Input Files:	None;
//Output Files:	None;
//Modules Used: turtle.h
//Purpose:		A program that combines the capabilities of the Turtle, position, Pen,
//				and Direction class to draw on a grid in the style of the Logo language
/////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
#include "turtle.h"

using namespace std;

const int DIMENSIONS = 22; //Size of the grid

/////////////////////////////////////////////////////////////////////////////////////////
//Function Name:	main
//Purpose:			Main function of the program were everything comes together.
//					Constructs a grid, Displays a menu of options of things to do to
//					manipulate the grid, then loops over user input and does the things
//					those options stated. Options are 1 change pen position,2 turn,
//					3 move forward, 4 print, 5 change brush, 6 erase / start over, 
//					7 jump, 8 see menu again, 9 end program.
//return value:		int
//Functions Called:	Turtle.getTurtleCharacter(), Turtle.getPen(), Turtle.getDir()
//					Turtle.getPos(), Position.getXPos(), Position.getYPos()
//					Position.setPos(), Direction.getDir(), Direction.turn90Degrees()
//					Pen.getPenPosition(), Pen.changePenPosition(), Pen.getPenTip()
/////////////////////////////////////////////////////////////////////////////////////////
int main() {
	//Variable declerations
	Turtle tort; //Turtle that we are moving and drawing with. Tort is short for tortoise
	char grid[DIMENSIONS][DIMENSIONS]; //Grid the turtle is drawing and moving on
	int input; //Variable for user input
	//Construct the grid. Nested For loop for x and y
	for (int i = 0; i < DIMENSIONS; i++) { //x axis
		for (int j = 0; j < DIMENSIONS; j++) { //y axis
			if (i == 0 || i == DIMENSIONS - 1) { //Place walls
				grid[i][j] = 205;
			} else if (j == 0 || j == DIMENSIONS - 1) { //Place walls
				grid[i][j] = 186;
			} else { //otherwise put a floor down
				grid[i][j] = ' ';
			}
		}
	}
	//Place all the corners
	grid[0][0] = 201;
	grid[DIMENSIONS - 1][0] = 200;
	grid[0][DIMENSIONS - 1] = 187;
	grid[DIMENSIONS - 1][DIMENSIONS - 1] = 188;


	//Print the menu
	cout << "\t\t Menu\n";
	cout << "1\t\t change pen position.\n";
	cout << "2\t\t turn.\n";
	cout << "3\t\t move forward.\n";
	cout << "4\t\t print grid.\n";
	cout << "5\t\t change brush.\n";
	cout << "6\t\t erase/startover.\n";
	cout << "7\t\t jump to position.\n";
	cout << "8\t\t reprint menu.\n";
	cout << "9\t\t exit program.\n";


	//Do while loop to keep the program running until the user want to quit
	do {
		//Ask for and get the users input
		cout << "Choice: ";
		cin >> input; 
		switch (input) { //Switch using the input as the switching statement
		case 1: { //1 change pen position
			tort.getPen().changePenPosition(); //Change the pen position
			//Tell the user what position the pen is in. if else statement converts the position to text
			if (tort.getPen().getPenPosition()) {
				cout << "Pen is up." << endl << endl;
			} else {
				cout << "Pen is down" << endl << endl;
			}
		}
				break;
		case 2: { //2 turn the turtle
			//Ask and get the direction the user would like to turn the turtle
			char leftOrRight;
			cout << "Which direction? R(Right) L(Left):";
			cin >> leftOrRight;
			if (toupper(leftOrRight) == 'R') { //Turn Right
				tort.getDir().rotate90Degrees(true);
			}
			else if (toupper(leftOrRight) == 'L') { //Turn Left
				tort.getDir().rotate90Degrees(false);
			}
			else { //If it's not R or L its invalid tell the user as much
				cout << "Invalid input press enter and try again.\n";
			}

			cout << "Direction is ";
			//Switch over the enum value and print the corresponding direction
			switch (tort.getDir().getDirection()) {
			case 0: //First is north
				cout << "north.\n";
				break;
			case 1: //Second east
				cout << "east.\n";
				break;
			case 2: //Third south
				cout << "south.\n";
				break;
			case 3: //Finally west
				cout << "west.\n";
			}
		}
			break;
		case 3: { //3 Move the turtle forward
			//Ask for and get the distance the user wants to move the turtle
			int distance = 0;
			cout << "Enter a distance to move: ";
			cin >> distance;
			if (distance && distance > 0) { //Make sure the user inputted an integer and its greater than 0
				for (int i = 0; i < distance; i++) { //Loop over the grid locations the turtle is travelling
					//Heading north not outside of the grids box
					if (tort.getDir().getDirection() == Direction::NORTH && tort.getPos().getXPos() != 0) {
						if (!tort.getPen().getPenPosition()) { //Check the pen position
							//If the pen is down change the grid items to the brush character
							grid[tort.getPos().getXPos()+1][tort.getPos().getYPos()+1] = tort.getPen().getPenTip();
						}
						//Move it one unit on the corresponding axis
						tort.getPos().SetPos(tort.getPos().getXPos() - 1, tort.getPos().getYPos());
					}
					//Heading south not outside of the grids box
					else if (tort.getDir().getDirection() == Direction::SOUTH && tort.getPos().getXPos() != DIMENSIONS-3) {
						if (!tort.getPen().getPenPosition()) { //Check the pen position
							//If the pen is down change the grid items to the brush character
							grid[tort.getPos().getXPos() + 1][tort.getPos().getYPos() + 1] = tort.getPen().getPenTip();
						}
						//Move it one unit on the corresponding axis
						tort.getPos().SetPos(tort.getPos().getXPos() + 1, tort.getPos().getYPos());
					}
					//Heading east not outside of the grids box
					else if (tort.getDir().getDirection() == Direction::EAST && tort.getPos().getYPos() != DIMENSIONS-3) {
						if (!tort.getPen().getPenPosition()) { //Check the pen position
							//If the pen is down change the grid items to the brush character
							grid[tort.getPos().getXPos()+1][tort.getPos().getYPos()+1] = tort.getPen().getPenTip();
						}
						//Move it one unit on the corresponding axis
						tort.getPos().SetPos(tort.getPos().getXPos(), tort.getPos().getYPos() + 1);
					}
					//Heading west not outside of the grids box
					else if (tort.getDir().getDirection() == Direction::WEST && tort.getPos().getYPos() != 0) {
						if (!tort.getPen().getPenPosition()) { //Check the pen position
							//If the pen is down change the grid items to the brush character
							grid[tort.getPos().getXPos()+1][tort.getPos().getYPos()+1] = tort.getPen().getPenTip();
						}
						//Move it one unit on the corresponding axis
						tort.getPos().SetPos(tort.getPos().getXPos(), tort.getPos().getYPos() - 1);
					}
				}
			} else { //We set the distance to 0 if it isn't changed the input stream is probably messed up
				cin.clear(); //Clear the input stream
				cin.ignore(200, '\n'); //ignore any input
				cout << "Invalid distance to move press enter.\n"; //Tell the user they are dumb
			}
		}
			break;
		case 4: { //4 print the grid
			for (int i = 0; i < DIMENSIONS; i++) { //Loop over the x axis
				for (int j = 0; j < DIMENSIONS; j++) { //Loop over the y axis
					//If the current location equals the turtles location plus one thats were to draw the turtle
					if ((i == tort.getPos().getXPos()+1) && (j == tort.getPos().getYPos()+1)) {
						cout << tort.getTurtleCharacter(); //Output the turtle character
					} else { //Otherwise output whatever cahracter is in the grid
						cout << grid[i][j];
					}
				}
				cout << endl; //Next row
			}
		}
				break;
		case 5: { //5 change the brush head to a new user selected one
			int tipSelection; //Store the user selection in this int
			//Display menu with brush options
			cout << "Select new brush character\n";
			cout << "1\t\t 'X'\n";
			cout << "2\t\t '#'\n";
			cout << "3\t\t 'O'\n";
			cout << "4\t\t ' '\n";
			cin >> tipSelection; //Input the users selection
			switch (tipSelection){ //Switch using the selection as the condition
			case 1:
				tort.getPen().setPenTip('X'); //Set the pen tip to the appropiate character
				break;
			case 2:
				tort.getPen().setPenTip('#'); //Set the pen tip to the appropiate character
				break;
			case 3:
				tort.getPen().setPenTip('O'); //Set the pen tip to the appropiate character
				break;
			case 4:
				tort.getPen().setPenTip(' '); //Set the pen tip to the appropiate character
				break;
			default: //If we get here something wrong was entered
				cin.clear(); //Clear the input stream
				cin.ignore(200, '\n'); //Ignore invalid input
				cout << "Invalid selection press enter.\n"; //Tell the user they are wrong
				break;
			}
			cout << "Character is now " << tort.getPen().getPenTip() << endl; //Display the new character
		}
				break;
		case 6: { //6 erase the board
			cout << "Erasing the board.\n\n"; //Inform the user whats happpening
			//Reset the turtle
			tort.getPos().SetPos(0, 0); //Move the turtle to 0x 0y
			tort.getDir().setDirection(Direction::EAST); //Set the turtles direction to east
			tort.getPen().setPenTip('X'); //Change the tip back to X
			if (!tort.getPen().getPenPosition()) { //Check if the pen is up
				tort.getPen().changePenPosition(); //if so move the pen up
			}
			//Construct the grid. Nested For loop for x and y
			for (int i = 0; i < DIMENSIONS; i++) { //x axis
				for (int j = 0; j < DIMENSIONS; j++) { //y axisx
					//place the turle at that postion
					if (i == 0 || i == DIMENSIONS - 1) { //Place walls
						grid[i][j] = 205;
					}
					else if (j == 0 || j == DIMENSIONS - 1) { //Place walls
						grid[i][j] = 186;
					}
					else { //otherwise put a floor down
						grid[i][j] = ' ';
					}
				}
			}
			//Place all the corners
			grid[0][0] = 201;
			grid[DIMENSIONS - 1][0] = 200;
			grid[0][DIMENSIONS - 1] = 187;
			grid[DIMENSIONS - 1][DIMENSIONS - 1] = 188;
		}
				break;
		case 7: { //7 jump to some position
			//Ask for and input new x and y coordinates
			int x, y;
			cout << "Enter a valid position to jump to (0-19), x then y:";
			cin >> x;
			cin >> y;
			//Make sure the coordinates are inside the grid
			if ((x >= 0 && x < 20) && (y >= 0 && y < 20)) {
				tort.getPos().SetPos(x, y); //Move the turtle to the new position and then tell the user as much
				cout << "New position is x:" << tort.getPos().getXPos() << " y:" << tort.getPos().getYPos() << endl;
			} else { //Else they inputted something wrong might as well clear the input 
					 //stream cause it could have been a char or something
				cin.clear();
				cin.ignore();
				cout << "Invalid grid coordinates press enter.\n";
			}
		}
				break;
		case 8: { //8 reprint menu
			//Not much to it just reprint the menu
			cout << "\t\t Menu\n";
			cout << "1\t\t change pen position.\n";
			cout << "2\t\t turn.\n";
			cout << "3\t\t move forward.\n";
			cout << "4\t\t print grid.\n";
			cout << "5\t\t change brush.\n";
			cout << "6\t\t erase/startover.\n";
			cout << "7\t\t jump to position.\n";
			cout << "8\t\t reprint menu.\n";
			cout << "9\t\t exit program.\n";
		}
				break;
		case 9: { //9 quit the programs
			cout << "Quitting\n"; //Tell the user whats going on
		}
				break;
		default: { //If its not 1-9 its invalid clear the input stream
			cin.clear();
			cin.ignore(200, '\n');
			cout << "Invalid input press enter and try again.\n\n"; //Tell the user they did something wrong
		}
				 break;
		}
		//Clear any excess input
		cin.clear();
		cin.ignore(200, '\n');
	} while (input != 9); //As long as the user didn't input a 9 we will continue the do while loop
	

	cout << endl;
	return 0;
}