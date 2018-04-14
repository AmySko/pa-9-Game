#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>


using std::endl;
using std::cout;
using std::cin;
//using sf;


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


