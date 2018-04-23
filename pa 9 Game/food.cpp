/**************************************************************
*	Amber Skogen
*	Tyler Scheffler
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


Sprite Food::getSprite()
{
	//Sprite Spic;
	Spic = pFood->getSprite();
	return Spic;
}


/*---------------setters-------------------------------*/

void Food::setSprite(Sprite newsPic)
{
	this->Spic = newsPic;
}

/*---------------Other Functions-------------------------------*/
Sprite Food::operator= (Sprite rhs)
{
	rhs = getSprite();
	
	
	//rhs.getPosition() // gets the corner put it in
	return rhs;
}

bool Food::carrytoDrop()
{
	//if the food is at the carrying position, this will be called first when F key is pressed
}

bool Food::grabFood(Sprite sPic, Sprite waiter)
{
	sf::FloatRect boundsFood;
	sf::FloatRect boundsWaiter;
	bool grabbed = false;

	// gives bound(0,0,0,0) //left, top, width, height
	boundsFood = sPic.getGlobalBounds();
	boundsWaiter = waiter.getGlobalBounds();

	/*Food taco1(760, 55, 1);
	Food cheesecake1(760, 144, 2);
	Food chili1(760, 230, 3);*/

	//if the waiter is within a certain distance of the food
		if ((boundsWaiter.left > (boundsFood.left - 10)) && (boundsWaiter.top > (boundsFood.top - 10))) 
		{
			grabbed = true;

			//move, set pos
		}
		//setpos(bw - x, bw - y)
	
	//if F = true
	//moveFood(left, top, sPic);
}

void Food::moveFood(double stepX, double stepY, Sprite sPic)
{
	//while click is +x and -y and waiter is within -x and -y
	sPic.move(stepX, stepY); //need to be floating points
	/*move equivalent too: sf::Vector2f pos = object.getPosition();
	object.setPosition(pos.x + offsetX, pos.y + offsetY);*/

	//F is case 5
}

/*---------------Private Functions-------------------------------*/

bool Food::eaten(vector<int> Plates)
{
	int i;


	return false;
}