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



class Furniture : public Images
{
public:
	Furniture(Images &temp) : Images(temp)
	{
		chairEmpty = true;
	}

	void setChairStatus(int signal) {
		if (signal == 1) {
			chairEmpty = false;
		}
		else
		{
			chairEmpty = true;
		}
	}

	bool getChairStatus() {
		return chairEmpty;
	}


	virtual void printType()
	{
		cout << "Furniture!" << std::endl;
	}

private:
	bool chairEmpty;
};


