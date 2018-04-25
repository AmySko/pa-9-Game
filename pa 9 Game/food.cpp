/**************************************************************
*	Amber Skogen, Tyler Scheffler
*	25 April 2018
*	pa 9 Game
*
*
**************************************************************/
#include "food.h"


Food::~Food()
{
	eaten(Plates);
}

/*---------------getters-------------------------------*/


//Sprite Food::getSprite()
//{
//	//Sprite Spic;
//	Spic = pFood->getSprite();
//	return Spic;
//}


/*---------------setters-------------------------------*/

//void Food::setSprite(Sprite newsPic)
//{
//	this->Spic = newsPic;
//}
void Food::setFoodImage(Images &foodI)
{
	//maybe put this in an overloaded operator func
	this->setName(foodI.getName());
	this->setXaxis(foodI.getXaxis());
	this->setYaxis(foodI.getYaxis());
	this->setTargetX(30.0f);
	this->setTargetY(25.0f);
}

/*---------------Other Functions-------------------------------*/
Images & Food::operator= (Images &rhs)
{
	//this->setName(rhs.getName())
	
	
	//rhs.getPosition() // gets the corner put it in
	return rhs;
}
/*
precondition: F is true
//if the food is at the carrying position, this will be called first when F key is pressed

*/
bool Food::carrytoDrop(Sprite &sGrab, Sprite waiter)
{
	bool carrying = false;
	sf::FloatRect boundsWaiter;
	sf::FloatRect boundsFood;

	boundsWaiter = waiter.getGlobalBounds();
	boundsFood = sGrab.getGlobalBounds();

	//boundsWaiter.left - 30, boundsWaiter.top
	if ((boundsFood.left == (boundsWaiter.left - 30)) && (boundsFood.top == boundsWaiter.top))
	{
		carrying = true;
	}
	return carrying;
}

/*pass in a dummy sprite for what you are carrying and the waiter/server's sprite
The dummy sprite becomes a new plate/ the plate you are carrying
precondition: F is true and carrytoDrop is false*/
bool Food::grabFood(Sprite &sGrab, Sprite waiter)
{
	sf::FloatRect boundsWaiter;
	bool grabbed = false;
	int option = 0;

	// gives bound(0,0,0,0) //left, top, width, height
	boundsWaiter = waiter.getGlobalBounds();

	/*Food taco1(760, 55, 1);
	Food cheesecake1(760, 144, 2);
	Food chili1(760, 230, 3);*/

	//if the waiter is within a certain distance of the food
		if ((boundsWaiter.left >= (750)) && (boundsWaiter.top >= (45))) //taco
		{
			grabbed = true;
			option = 1;
		}
		else if ((boundsWaiter.left >= (750)) && (boundsWaiter.top >= (134))) //cheesecake
		{
			grabbed = true;
			option = 2;
		}
		else if ((boundsWaiter.left >= (750)) && (boundsWaiter.top >= (220))) //chili
		{
			grabbed = true;
			option = 3;
		}
		//if the object was grabbed clone it and position it next to the server
		if (grabbed)
		{
			//Food newPlate((boundsWaiter.left - 30), boundsWaiter.top, option);
			//sGrab = newPlate.getSprite();
		}
		return grabbed;
}

/*
precondition: F is true and grabbed is true
A or D, Pass in +5 or -5
*/
void Food::moveFoodX(Sprite sGrab, double moveX)
{
	
	//while click is +x and -y and waiter is within -x and -y
	sGrab.move(moveX, 0.0f); //need to be floating points
	/*move equivalent too: sf::Vector2f pos = object.getPosition();
	object.setPosition(pos.x + offsetX, pos.y + offsetY);*/

	//F is case 5
}
/*
precondition: F is true and grabbed is true
W or S, Pass in +5 or -5
*/
void Food::moveFoodY(Sprite sGrab, double moveY)
{
	sGrab.move(0.0f, moveY); //need to be floating points
}

/*---------------Private Functions-------------------------------*/

bool Food::eaten(vector<int> Plates)
{
	int i;


	return false;
}