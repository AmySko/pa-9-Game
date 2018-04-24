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
#include "Furniture.h"

using sf::Sprite;

class Chair : public Furniture
{
public:
	Chair(Images &temp) : Furniture(temp)
	{

	}

	/*Chair(int Yaxis)
	{
		Images stool;
		pChair = nullptr;

		pChair = new Images(stool);
		if (pChair != nullptr)
		{
			pChair->setName("round-wood1.jpg");
			pChair->setXaxis(270);
			pChair->setYaxis(Yaxis);
			pChair->setTargetX(30.0f);
			pChair->setTargetY(25.0f);

			pChair->display();
		}*/
	//}

	/*---------------getters-------------------------------*/

	Sprite getSprite()
	{
	
		Spic = pChair->getSprite();
		return this->Spic;
	}

private:
	Images *pChair;
	Sprite Spic;
};

