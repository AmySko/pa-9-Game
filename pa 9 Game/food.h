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
		setFoodImage(temp);
	}

	

	~Food();

	/*---------------getters-------------------------------*/


	//Sprite getSprite();
	
	/*---------------setters-------------------------------*/

	//void setSprite(Sprite newsPic);
	void setFoodImage(Images &foodI);

	/*---------------Other Functions-------------------------------*/
	Images & operator= (Images &rhs);

	void cipherKeyGrab(int carrying, Images &gFood, Sprite waiter);
	bool carrytoDrop(Sprite &sGrab, sf::FloatRect boundsWaiter);
	bool grabFood(Images &gFood, sf::FloatRect boundsWaiter);

	void moveFood(Sprite sGrab, double moveX, double moveY);

	void moveFoodX(Sprite sGrab, double moveX);
	void moveFoodY(Sprite sGrab, double moveY);

	//void newPlate(int option, Sprite &sGrab)
	//{
	//	Texture foodGrabbed;
	//	switch (option)
	//	{
	//	case 1:
	//		if (!foodGrabbed.loadFromFile("taco_butt.png"))
	//		{
	//			throw std::runtime_error("could not load image");
	//		}
	//		//Plates.push_back(count += 1);
	//		break;
	//	case 2:
	//		if (!foodGrabbed.loadFromFile("Cheesecake.png"))
	//		{
	//			throw std::runtime_error("could not load image");
	//		} 
	//		//Plates.push_back(count += 1);
	//		break;
	//	case 3:
	//		if (!foodGrabbed.loadFromFile("chili.png"))
	//		{
	//			throw std::runtime_error("could not load image");
	//		} 
	//		//Plates.push_back(count += 1);
	//		break;
	//	}
	//	display();
	//	sGrab.setTexture(foodGrabbed);
	//	
	//}

private:
	bool eaten(vector<int> Plates);

	vector<int> Plates;
	
	int count;

	Images *pFood;

	Sprite Spic;

	bool isPickedUp;

};




