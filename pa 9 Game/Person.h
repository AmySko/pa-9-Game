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
#include "food.h"

using namespace sf;
using sf::Image;
using sf::Sprite;
using sf::Texture;

class Person : public Images
{
public: 
	Person(Images &temp) : Images(temp)
	{
	
	
	}

	//WASD
	/*
	Andy will never be by food when he moves, so this should work
	Food needs to go poof before Andy gets up
	sCarry is the sprite you are carrying

	returns: 
		-1 for put down
		1 pick up 
		2 not carrying
		3 carrying 

	*/
	int keyListener(int buttonPress, int &carrying) {
		
		switch(buttonPress) {
		case 22: //W
			movement(buttonPress);
			break;

		case 0: //A
			movement(buttonPress);
			break;

		case 18://S
			movement(buttonPress);
			break;

		case 3: //D
			movement(buttonPress);
			break;

		case 5: carrying = 1;//F
			break;

		case 4://E
			carrying = -1;
			break;

		default:
			break;
		}
		return carrying;
	}

	void movement(int direction) {
		switch (direction) {
		case 22:
			if (getYaxis() - 5 > 0) {
				this->setYaxis(getYaxis() - 5);
			}
			break;
		case 0:
			if ((getXaxis() - 5 > 0) && (getXaxis() + 5 != 280)) {
				this->setXaxis(getXaxis() - 5);
			}
			break;
		case 18:
			if (getYaxis() + 5 < 350) {
				this->setYaxis(getYaxis() + 5);
			}
			break;
		case 3:
			if ((getXaxis() + 5 < 750) && (getXaxis() + 5 != 270)) {
				this->setXaxis(getXaxis() + 5);
			}
			break;
		default:
			break;
		}
}


virtual void printType()
{
	cout << "Person!" << std::endl;
}


private:

};

