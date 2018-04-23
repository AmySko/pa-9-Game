/**************************************************************
*	Amber Skogen
*	Tyler Scheffler
*	25 April 2018
*	pa 9 Game
*
*
**************************************************************/
#pragma once 

#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include "Multiple_images.h"

using namespace sf;

class Person
{
public:
	Person()
	{

	}


	//WASD
	void keyListener(int buttonPress) {
		switch(buttonPress) {
		case 22:
			movement(buttonPress);
			break;
		case 0:
			movement(buttonPress);
			break;
		case 18:
			movement(buttonPress);
			break;
		case 3:
			movement(buttonPress);
			break;
		default:
			break;
		}
	}

	void movement(int direction) {
		switch (direction) {
		case 22:
			if (getYPos() - 5 > 0) {
				this->setYpos(getYPos() - 5);
			}
			break;
		case 0:
			if (getXPos() - 5 > 0) {
				this->setXpos(getXPos() - 5);
			}
			break;
		case 18:
			if (getYPos() + 5 < 350) {
				this->setYpos(getYPos() + 5);
			}
			break;
		case 3:
			if (getXPos() + 5 < 750) {
				this->setXpos(getXPos() + 5);
			}
			break;
		default:
			break;
		}
}

int getXPos() {
	return this->xPos;
}

int getYPos() {
	return this->yPos;
}

/*---------------setters-------------------------------*/
void setXpos(int newXPos) {
	this->xPos = newXPos;
}

void setYpos(int newYPos) {
	this->yPos = newYPos;
}



private:

	int xPos;
	int yPos;
};

