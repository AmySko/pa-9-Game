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

class Table : public Images, public Furniture
{
public:
	Table()
	{
		Images flat;
		pTable = nullptr;

		pTable = new Images(flat);
		if (pTable != nullptr)
		{
			pTable->setName("dark-oak-table-top.jpg");
			pTable->setXaxis(300);
			pTable->setYaxis(15);
			pTable->setTargetX(50.0f);
			pTable->setTargetY(320.0f);

			pTable->display();
		}
	}

	/*---------------getters-------------------------------*/

	Sprite getSprite()
	{
		Sprite Spic;
		Spic = pTable->getSprite();
		return Spic;
	}


private:
	Images *pTable;

};
