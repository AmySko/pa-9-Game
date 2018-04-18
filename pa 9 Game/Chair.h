#pragma once 

#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>


class Chair
{
public:
	Chair(int Yaxis)
	{	
		if (!chair.loadFromFile("round-wood1.jpg"))
		{
			throw std::runtime_error("could not load table");
		}

			sChair.setTexture(chair);
			//the size we want the table
			sf::Vector2f targetSizeChair(30.0f, 25.0f);
			//changes the size of the table
			sChair.setScale(targetSizeChair.x / sChair.getLocalBounds().width, targetSizeChair.y / sChair.getLocalBounds().height);
			setpos(Yaxis);
	}
	
	void setpos(int Yaxis)
	{
		//where we want to table
		sChair.setPosition(*(new sf::Vector2f(267, Yaxis)));

	}
	sf::Sprite getSprite()
	{
		return this->sChair;
	}

private:
	sf::Texture chair; 
	sf::Sprite sChair;

};

