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
#include "Person.h"

class Andy : public Person
{
public:
	Andy(Images &temp) : Person(temp)
	{

	}

	//Andy(int Xaxis, int Yaxis)
	//{
	//	/*Images dude;
	//	pAndy = nullptr;

	//	pAndy = new Images(dude);
	//	if (pAndy != nullptr)
	//	{
	//		pAndy->setName("o'fallon.png");
	//		pAndy->setXaxis(Xaxis);
	//		pAndy->setYaxis(Yaxis);
	//		pAndy->setTargetX(40.0f);
	//		pAndy->setTargetY(35.0f);

	//		pAndy->display();
	//	}*/
	//}

	~Andy();

	/*---------------getters-------------------------------*/
	int getXaxis();
	int getYaxis();

	Sprite getSprite();


	/*---------------setters-------------------------------*/
	void setXaxis(int newXaxis);
	void setYaxis(int newYaxis);


	/*---------------Other functions-------------------------------*/

private:
	Person *perAndy;
	Images *pAndy;
	int Xaxis;
	int Yaxis;
};

