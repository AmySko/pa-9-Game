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
		temp.display();
	}

	//Person(string name, int Xaxis, int Yaxis, double tarX, double tarY)
	//{
	//	//if andy it should never carry
	//	/*Sprite sDude;

	//Food dish;
	//Sprite sCarry; // = dish.getSprite();
	//bool carrying;

	//int xPos;
	//int yPos;*/
	//	Images dude;
	//	iPerson = nullptr;

	//	iPerson = new Images(dude);
	//	if (iPerson != nullptr)
	//	{
	//		iPerson->setName(name);
	//		iPerson->setXaxis(Xaxis);
	//		iPerson->setYaxis(Yaxis);
	//		iPerson->setTargetX(tarX);
	//		iPerson->setTargetY(tarY);

	//		iPerson->display();
	//	}
	//	sDude = iPerson->getSprite();
	//	carrying = false;

	//}


	//WASD
	/*
	Andy will never be by food when he moves, so this should work
	Food needs to go poof before Andy gets up
	sCarry is the sprite you are carrying
	*/
	void keyListener(int buttonPress) {
		switch(buttonPress) {
		case 22: //W
			if (carrying)
			{
				dish->moveFoodY(sCarry, 5.0);
			}
			movement(buttonPress);
			break;
		case 0: //A
			if (carrying)
			{
				dish->moveFoodX(sCarry, -5.0);
			}
			movement(buttonPress);
			break;
		case 18://S
			if (carrying)
			{
				dish->moveFoodY(sCarry, -5.0);
			}
			movement(buttonPress);
			break;
		case 3: //D
			if (carrying)
			{
				dish->moveFoodX(sCarry, 5.0);
			}
			movement(buttonPress);
			break;
		case 5: //F
		//if this is true then there is a plate being carried and we want to drop it	
		if (dish->carrytoDrop(sCarry, sDude))
		{
			carrying = false;
		}
		else
		{
			carrying = dish->grabFood(sCarry, sDude);
		}
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
	Images *iPerson;

	Sprite sDude;

	Food *dish;
	Sprite sCarry; // = dish.getSprite();
	bool carrying;

	int xPos;
	int yPos;
};

