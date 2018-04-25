/**************************************************************
*	Amber Skogen
*	Tyler Scheffler
*	25 April 2018
*	pa 9 Game
*
*
**************************************************************/
#include "Multiple_images.h"

Images::Images(string newname, int newXaxis, int newYaxis, double newtargetX, double newtargetY)
{
	this->Xaxis = newXaxis;
	this->Yaxis = newYaxis;
	this->name = newname;
	this->targetX = newtargetX;
	this->targetY = newtargetY;
	display();
}

Images::Images(Images &newdata)
{
	name = newdata.name;
	Xaxis = newdata.Xaxis;
	Yaxis = newdata.Yaxis;
	targetX = newdata.targetX;
	targetY = newdata.targetY;
	
	display();
}


Images::~Images()
{

}


//get the sprite
Sprite Images::getSprite()
{
	return this->sPic;
}

int Images::getXaxis()
{
	return this->Xaxis;
}
int Images::getYaxis()
{
	return this->Yaxis;
}
string Images::getName()
{
	return this->name;
}
double Images::getTargetX()
{
	return this->targetX;
}
double Images::getTargetY()
{
	return this->targetY;
}


//set the x and y axis of where the image will be placed
void Images::setpos(int Xaxis, int Yaxis)
{
	sPic.setPosition(*(new sf::Vector2f(Xaxis, Yaxis)));
}

void Images::setSprite(Sprite newsPic)
{
	this->sPic = newsPic;
}

void Images::setXaxis(int newXaxis)
{
	this->Xaxis = newXaxis;
}
void Images::setYaxis(int newYaxis)
{
	this->Yaxis = newYaxis;
}
void Images::setName(string newname)
{
	this->name = newname;
}

void Images::setTargetX(double newtargetX)
{
	this->targetX = newtargetX;
}
void Images::setTargetY(double newtargetY)
{
	this->targetY = newtargetY;
}

void Images::setImage(Images &fooI)
{

}


/*---------------Other functions-------------------------------*/

bool Images::display()
{
	bool success = false;
	//loads pic from file
	if (!pic.loadFromFile(name))
	{
		throw std::runtime_error("could not load image");
	}
	//puts texture in sprite
	sPic.setTexture(pic);
	//the size we want the pic
	sf::Vector2f targetSizePic(getTargetX(), getTargetY());
	//changes the size of pic
	sPic.setScale(targetSizePic.x / sPic.getLocalBounds().width, targetSizePic.y / sPic.getLocalBounds().height);
	//start position of pic
	setpos(getXaxis(), getYaxis());

	//would exit the function if runtime_error
	return true;
}

//bool Images::displayVec(vector<Images> dishes)
//{
//
//}