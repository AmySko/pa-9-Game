#pragma once 

#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>


class Background
{
public:
	Background(std::string name)
	{
		
		setBackground(name, sf::Vector2f(0.f, 0.f));
	}

	void setBackground(std::string name, sf::Vector2f pos)
	{
		background.loadFromFile(name);
		ground.setTexture(background);
		ground.setPosition(pos);
	}
private:
	sf::Texture background;
	sf::Sprite ground;

};

