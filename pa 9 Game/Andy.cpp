#include "Andy.h"


Andy::~Andy()
{

}

/*---------------getters-------------------------------*/
int Andy::getXaxis()
{
	return this->Xaxis;
}
int Andy::getYaxis()
{
	return this->Yaxis;
}

Sprite Andy::getSprite()
{
	Sprite Spic;
	Spic = pAndy->getSprite();
	return Spic;
}


/*---------------setters-------------------------------*/
void Andy::setXaxis(int newXaxis)
{
	this->Xaxis = newXaxis;
}
void Andy::setYaxis(int newYaxis)
{
	this->Yaxis = newYaxis;
}


/*---------------Other functions-------------------------------*/


