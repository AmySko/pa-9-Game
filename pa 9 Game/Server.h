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

class Server : public Images
{
public:
	Server()
	{
		pServer = nullptr;
		Xaxis = 0;
		Yaxis = 0;
	}

	Server(int Xaxis, int Yaxis)
	{
		Images dude;
		pServer = nullptr;

		pServer = new Images(dude);
		if (pServer != nullptr)
		{
			pServer->setName("Dwight.jpg");
			pServer->setXaxis(Xaxis);
			pServer->setYaxis(Yaxis);
			pServer->setTargetX(40.0f);
			pServer->setTargetY(35.0f);

			pServer->display();
		}
	}

	~Server();

	/*---------------getters-------------------------------*/
	int getXaxis();
	int getYaxis();

	Sprite getSprite();


	/*---------------setters-------------------------------*/
	void setXaxis(int newXaxis);
	void setYaxis(int newYaxis);


	/*---------------Other functions-------------------------------*/

	double control();


private:
	Images *pServer;
	int Xaxis;
	int Yaxis;
};

