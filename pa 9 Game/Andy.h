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



	~Andy();

	/*---------------getters-------------------------------*/
	int getXaxis();
	int getYaxis();


	/*---------------setters-------------------------------*/
	void setXaxis(int newXaxis);
	void setYaxis(int newYaxis);


	/*---------------Other functions-------------------------------*/
	virtual void printType()
	{
		cout << "Andy!" << std::endl;
	}

private:
	/*Person *perAndy;
	Images *pAndy;*/
	int Xaxis;
	int Yaxis;
};

