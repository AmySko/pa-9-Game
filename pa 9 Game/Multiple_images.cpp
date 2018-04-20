/**************************************************************
*	Amber Skogen
*	Tyler Scheffler
*	25 April 2018
*	pa 9 Game
*
*
**************************************************************/
#include "Multiple_images.h"

Images::Images()
{
	this->Xaxis = 0;
	this->Yaxis = 0;
	this->name = "";
	this->targetX = 0.0;
	this->targetY = 0.0;
}

Images::Images(Images &newdata)
{
	name = newdata.name;
	Xaxis = newdata.Xaxis;
	Yaxis = newdata.Yaxis;
	targetX = newdata.targetX;
	targetY = newdata.targetY;
	
}

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
	setpos(Xaxis, Yaxis);

	//would exit the function if runtime_error
	return true;
}

Images::~Images()
{

}

//set the x and y axis of where the image will be placed
void Images::setpos(int Xaxis, int Yaxis)
{
	sPic.setPosition(*(new sf::Vector2f(Xaxis, Yaxis)));

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
