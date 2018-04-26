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
#include <vector>
#include <string>
#include "Multiple_images.h"



using std::vector;
using std::string;
using std::cout;

class Food : public Images
{
public:
	Food(Images &temp) : Images(temp) 
	{
		temp.display();
		setImage(temp);
	}

	~Food();

	/*---------------getters-------------------------------*/

	
	/*---------------setters-------------------------------*/

	//void setSprite(Sprite newsPic);
	void setImage(Images &fooI);

	/*---------------Other Functions-------------------------------*/
	Images & operator= (Images &rhs);

	bool cipherKeyGrab(int &carrying, Sprite waiter, int &index);
	bool carrytoDrop(Sprite &sGrab, sf::FloatRect boundsWaiter);
	bool grabFood(sf::FloatRect boundsWaiter);

	void moveFood(double moveX, double moveY);

	void moveFoodX(Sprite sGrab, double moveX);
	void moveFoodY(Sprite sGrab, double moveY);

	

private:
	
};




