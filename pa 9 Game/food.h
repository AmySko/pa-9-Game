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
#include <vector>
#include <string>
#include "Multiple_images.h"


using std::vector;
using std::string;

class Food
{
public:
	Food(int Yaxis, int option)
	{
		Images foodPic;
		pFood = nullptr;

		pFood = new Images(foodPic);
		if (pFood != nullptr)
		{
			switch (option)
			{
			case 1: pFood->setName("taco_butt.png");
				break;
			case 2: pFood->setName("Cheesecake.png");
				break;
			case 3: pFood->setName("chili.png");
				break;
			}
			//---------------this Xaxis may need to change since the food will move with the server ----------------------//
			pFood->setXaxis(760);
			pFood->setYaxis(Yaxis);
			pFood->setTargetX(30.0f);
			pFood->setTargetY(25.0f);

			pFood->display();
		}
	}

	Sprite getISprite()
	{
		Sprite Spic;
		Spic = pFood->getSprite();
		return Spic;
	}

private:
	Images *pFood;
};




