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

using std::vector;
using std::string;

class Food
{
public:
	Food(int Yaxis, string name)
	{
		if (!food.loadFromFile(name))
		{
			throw std::runtime_error("could not load food");
		}

		sFood.setTexture(food);
		//the size we want the table
		sf::Vector2f targetSizeFood(30.0f, 25.0f);
		//changes the size of the table
		sFood.setScale(targetSizeFood.x / sFood.getLocalBounds().width, targetSizeFood.y / sFood.getLocalBounds().height);
		//start position will be on the counter
		setpos(Yaxis);
	}
	
	void setpos(int Yaxis)
	{
		//where we want to table
		sFood.setPosition(*(new sf::Vector2f(760, Yaxis)));

	}
	sf::Sprite getSprite()
	{
		return this->sFood;
	}

	//need a move function

	//end position

private:
	sf::Texture food;
	sf::Sprite sFood;

};




