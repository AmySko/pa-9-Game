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

class Server : public Person
{
public:
	Server(Images &temp) : Person(temp)
	{
		/*pServer = nullptr;
		setXpos(25);
		setYpos(25);

		Images dude;
		pServer = nullptr;

		pServer = new Images(dude);
		if (pServer != nullptr)
		{
			pServer->setName("Dwight.jpg");
			pServer->setXaxis(getXPos());
			pServer->setYaxis(getYPos());
			pServer->setTargetX(40.0f);
			pServer->setTargetY(35.0f);

			pServer->display();
		}*/
	}


	Images & updatePosition(Images &pServer) {
		
		pServer.setXaxis(getXaxis());
		pServer.setYaxis(getYaxis());
		pServer.display();
		return pServer;
	}

	~Server();

	//Sprite getSprite();
	
	virtual void printType()
	{
		cout << "Server!" << std::endl;
	}

private:
	//Images *pServer;

};

