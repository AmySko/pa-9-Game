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
		
	}


	Images & updatePosition(Images &pServer) {
		
		pServer.setXaxis(getXaxis());
		pServer.setYaxis(getYaxis());
		pServer.display();
		return pServer;
	}

	~Server();

	virtual void printType()
	{
		cout << "Server!" << std::endl;
	}

private:
	
};

