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

class Food 
{
public:
	Food()
	{
		count = 0; 
		pFood = nullptr;
	}

	Food(int Xaxis, int Yaxis, int option)
	{
		Images foodPic;
		pFood = nullptr;

		pFood = new Images(foodPic);
		if (pFood != nullptr)
		{
			switch (option)
			{
			case 1: pFood->setName("taco_butt.png");
				Plates.push_back(count += 1);
				break;
			case 2: pFood->setName("Cheesecake.png");
				Plates.push_back(count += 1);
				break;
			case 3: pFood->setName("chili.png");
				Plates.push_back(count += 1);
				break;
			}
			//---------------this Xaxis may need to change since the food will move with the server ----------------------//
			pFood->setXaxis(Xaxis);
			pFood->setYaxis(Yaxis);
			pFood->setTargetX(30.0f);
			pFood->setTargetY(25.0f);

			pFood->display();
		}
	}

	~Food();

	/*---------------getters-------------------------------*/


	Sprite getSprite();
	
	/*---------------setters-------------------------------*/

	void setSprite(Sprite newsPic);


	/*---------------Other Functions-------------------------------*/
	Sprite operator= (Sprite rhs);

	bool carrytoDrop(Sprite &sGrab, Sprite waiter);
	bool grabFood(Sprite &sGrab, Sprite waiter);

	void moveFoodX(Sprite sGrab, double moveX);
	void moveFoodY(Sprite sGrab, double moveY);

private:
	bool eaten(vector<int> Plates);

	vector<int> Plates;
	
	int count;

	Images *pFood;

	Sprite Spic;

	bool isPickedUp;

};




