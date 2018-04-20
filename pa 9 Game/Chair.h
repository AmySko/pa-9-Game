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
		//if (!chair.loadFromFile("round-wood1.jpg"))
		//{
		//	throw std::runtime_error("could not load chair");
		//}

		//	sChair.setTexture(chair);
		//	//the size we want the table
		//	sf::Vector2f targetSizeChair(30.0f, 25.0f);
		//	//changes the size of the table
		//	sChair.setScale(targetSizeChair.x / sChair.getLocalBounds().width, targetSizeChair.y / sChair.getLocalBounds().height);
		//	setpos(Yaxis);
	}

	void place()
	{
		pChair->display();
	}
	Sprite getISprite()
	{
		Sprite Spic;
		Spic = pChair->getSprite();
		return Spic;
	}
	//void setpos(int Yaxis)
	//{
	//	//where we want to table
	//	sChair.setPosition(*(new sf::Vector2f(267, Yaxis)));

	//}
	//sf::Sprite getSprite()
	//{
	//	return this->sChair;
	//}

private:
	//int Xaxis = 267;
	//string name = "round-wood1.jpg";
	//int Yaxis;
	/*sf::Texture chair; 
	sf::Sprite sChair;*/
	Images *pChair;
};

