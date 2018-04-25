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

class Table : public Furniture
{
public:
	Table(Images &temp) : Furniture(temp)
	{
		
	}

	/*---------------getters-------------------------------*/



	virtual void printType()
	{
		cout << "Table!" << std::endl;
	}
	
private:


};
