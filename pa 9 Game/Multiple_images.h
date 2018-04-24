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

using sf::Texture;
using sf::Sprite;
using std::string;

class Images
{
public:
	Images(string newname, int newXaxis, int newYaxis, double newtargetX, double newtargerY);
	Images(Images &newdata);
	~Images();

	bool display();

	void setpos(int Xaxis, int Yaxis);

	/*---------------getters-------------------------------*/

	virtual Sprite getSprite();
	int getXaxis();
	int getYaxis();
	string getName();
	double getTargetX();
	double getTargetY();

	

	/*---------------setters-------------------------------*/

	void setSprite(Sprite newsPic);
	void setXaxis(int newXaxis);
	void setYaxis(int newYaxis);
	void setName(string newname);
	void setTargetX(double newtargetX);
	void setTargetY(double newtargetY);

	void setFoodImage(Images &foodI);

private:
	Texture pic;
	Sprite sPic;

	int Xaxis;
	int Yaxis;
	string name;
	
	double targetX;
	double targetY;

};