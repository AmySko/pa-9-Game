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

using sf::Texture;
using sf::Sprite;
using std::string;
using std::vector;

class Images
{
public:
	Images() = default;
	Images(string newname, int newXaxis, int newYaxis, double newtargetX, double newtargerY);
	Images(Images &newdata);
	~Images();

	/*---------------getters-------------------------------*/

	virtual Sprite getSprite();
	int getXaxis();
	int getYaxis();
	string getName();
	double getTargetX();
	double getTargetY();

	

	/*---------------setters-------------------------------*/

	void setpos(int Xaxis, int Yaxis);

	void setSprite(Sprite newsPic);
	void setXaxis(int newXaxis);
	void setYaxis(int newYaxis);
	void setName(string newname);
	void setTargetX(double newtargetX);
	void setTargetY(double newtargetY);

	void setFoodImage(Images &foodI);

	/*---------------Other functions-------------------------------*/
	bool display();
	//bool displayVec(vector<Images> dishes);


private:
	Texture pic;
	Sprite sPic;

	int Xaxis;
	int Yaxis;
	string name;
	
	double targetX;
	double targetY;

};