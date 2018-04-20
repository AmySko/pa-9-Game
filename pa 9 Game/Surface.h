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


using std::endl;
using std::cout;
using std::cin;



class Surface : public Images
{
public:
	Surface(int Xaxis, int Yaxis, string name)
	{
		Images flat;
		sSurface = nullptr;

		sSurface = new Images(flat);
		if (sSurface != nullptr)
		{
			sSurface->setName(name);
			sSurface->setXaxis(Xaxis);
			sSurface->setYaxis(Yaxis);
			sSurface->setTargetX(50.0f);
			sSurface->setTargetY(320.0f);

			sSurface->display();
		}
	}

	Sprite getISprite()
	{
		Sprite Spic;
		Spic = sSurface->getSprite();
		return Spic;
	}

private:
	Images *sSurface;

};


