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
	//eaten(Plates);
}

/*---------------getters-------------------------------*/




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
carrying:
	-1 put down
	1 pick up
	2 not carrying, just continue
	3 carrying and move
*/
bool Food::cipherKeyGrab(int &carrying, Images &gFood, Images &foo, Sprite waiter, int &index) //may want an if statement in main to shorten
{
	bool update = false;
	sf::FloatRect boundsWaiter;
	boundsWaiter = waiter.getGlobalBounds();

	switch (carrying)
	{
	case -1://E pressed put down
		carrying = 2;
		break;
	case 1://F pressed see if can pick up and do so
		--index;
		if (index < 8)
		{
			index++;
		}
		else
		{
			index = 1;
		}
		//foo = gFood[index];
		if (grabFood(gFood, boundsWaiter))
		{
			(gFood).display();
			carrying = 3;
			update = true;
		}
		else
		{
			if (index != 1)
			{
				--index;
			}
			else
			{
				index = 8;
			}
		}
		
		break;
	case 2://do nothing

		break;
	case 3://move where appropriate 
		
		moveFood((gFood), (boundsWaiter.left - 30), boundsWaiter.top);
		gFood.display();
		break;
	}
	return update;
}


/*
precondition: F is true?
//if the food is at the carrying position, this will be called first when F key is pressed

*/
bool Food::carrytoDrop(Sprite &sGrab, sf::FloatRect boundsWaiter)
{
	bool carrying = false;
	//sf::FloatRect boundsWaiter;
	sf::FloatRect boundsFood;

	//boundsWaiter = waiter.getGlobalBounds();
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
bool Food::grabFood(Images &gFood, sf::FloatRect boundsWaiter)
{
	bool grabbed = false;

	//if the waiter is within a certain distance of the food
		if ((boundsWaiter.left >= (710)) && (boundsWaiter.top >= (40)) && (boundsWaiter.top <= (70))) //taco
		{
			gFood.setName("taco_butt.png");
			gFood.setXaxis(760);
			gFood.setYaxis(55);
			grabbed = true;
			//option = 1;
		}
		else if ((boundsWaiter.left >= (710)) && (boundsWaiter.top >= (130)) && (boundsWaiter.top <= (160))) //cheesecake
		{
			gFood.setName("Cheesecake.png");
			gFood.setXaxis(760);
			gFood.setYaxis(144);
			grabbed = true;
			//option = 2;
		}
		else if ((boundsWaiter.left >= (710)) && (boundsWaiter.top >= (220)) && (boundsWaiter.top <= (240))) //chili
		{
			gFood.setName("chili.png");
			gFood.setXaxis(760);
			gFood.setYaxis(230);
			grabbed = true;
			//option = 3;
		}
		//if the object was grabbed clone it and position it next to the server
		if (grabbed)
		{
			moveFood(gFood, (boundsWaiter.left - 30), boundsWaiter.top);
			//Plates.push_back(gFood); 
		}
		return grabbed;
}

void Food::moveFood(Images &gFood, double moveX, double moveY)
{
	//sGrab.move(moveX, moveY); //need to be floating points
	gFood.setXaxis(moveX);
	gFood.setYaxis(moveY);
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

//bool Food::eaten(vector<Images> Plates)
//{
//	int i;
//	vector<Images> Plate;
//	//Plate.display();
//	//Plate.
//
//	return false;
//}