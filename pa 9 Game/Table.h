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
#include <fstream>

using std::endl;
using std::cout;
using std::cin;
using std::fstream;



class Table : public sf::RectangleShape
{
public:
	Table(sf::Vector2f &pos, const sf::Color &c, sf::Vector2f &size)
	{
		this->setFillColor(c);
		this->setSize(size);
		this->setPosition(pos);
	}

};


