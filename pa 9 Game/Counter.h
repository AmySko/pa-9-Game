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

using sf::Texture;
using sf::Sprite;
using std::string;

class Counter : public Furniture
{
public:
	Counter(Images &temp) : Furniture(temp)
	{
		/*Images flat;
		pCounter = nullptr;

		pCounter = new Images(flat);
		if (pCounter != nullptr)
		{
			pCounter->setName("marble2.jpg");
			pCounter->setXaxis(755);
			pCounter->setYaxis(15);
			pCounter->setTargetX(50.0f);
			pCounter->setTargetY(320.0f);

			pCounter->display();
		}*/
	}

	/*---------------getters-------------------------------*/

	Sprite getSprite()
	{
		Sprite Spic;
		Spic = pCounter->getSprite();
		return Spic;
	}

	/*---------------Other Functions-------------------------------*/
	//
	//bool isFurniture(int Xaxis[], int Yaxis[]);


private:
	Images *pCounter;


	//int Xaxis[45];
	//int Yaxis[320];
};
