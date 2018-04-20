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

class Chair : public Images
{
public:
	Chair(int Yaxis)
	{	
		Images stool;
		pChair = nullptr;

		pChair = new Images(stool);
		if (pChair != nullptr)
		{
			pChair->setName("round-wood1.jpg");
			pChair->setXaxis(276);
			pChair->setYaxis(Yaxis);
			pChair->setTargetX(30.0f);
			pChair->setTargetY(25.0f);

			pChair->display();
		}
	}

	Sprite getISprite()
	{
		Sprite Spic;
		Spic = pChair->getSprite();
		return Spic;
	}

private:
	Images *pChair;
};

