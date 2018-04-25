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
		temp.display();
		setImage(temp);
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

	void setImage(Images &fooI)
	{
		//maybe put this in an overloaded operator func
		this->setName(fooI.getName());
		this->setXaxis(fooI.getXaxis());
		this->setYaxis(fooI.getYaxis());
		this->setTargetX(40.0f);
		this->setTargetY(35.0f);
	}

private:
	
	int Xaxis;
	int Yaxis;
};

