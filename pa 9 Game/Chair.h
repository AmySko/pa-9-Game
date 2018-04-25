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
	
private:
	
};

