#include "Server.h"

Server::~Server()
{

}

/*---------------getters-------------------------------*/
int Server::getXaxis()
{
	return this->Xaxis;
}
int Server::getYaxis()
{
	return this->Yaxis;
}

Sprite Server::getSprite()
{
	Sprite Spic;
	Spic = pServer->getSprite();
	return Spic;
}


/*---------------setters-------------------------------*/
void Server::setXaxis(int newXaxis)
{
	this->Xaxis = newXaxis;
}
void Server::setYaxis(int newYaxis)
{
	this->Xaxis = newYaxis;
}


/*---------------Other functions-------------------------------*/

double Server::control()
{
	//key has not been pressed
	//bool press = false;
	//everytime key is pressed we do something with the position
	//float pos = 0.0; 
	sf::Event event;
	bool press = false;
	float pos = 0.0;

	if (event.type == sf::Event::KeyPressed)
	{
		press = true;


		//Down
		if (event.key.code == sf::Keyboard::S) //can use virtual key codes if we want
		{
			pos += 4.0;
		}

		//Up
		if (event.key.code == sf::Keyboard::W)
		{
			pos -= 4.0;
		}

		//Right
		if (event.key.code == sf::Keyboard::D)
		{

		}
		//Left
		if (event.key.code == sf::Keyboard::A)
		{

		}

	}
	if (event.type == sf::Event::KeyReleased)
	{
		press = false;
	}

	if (press == true)
	{
		//server.move();
	}
	return pos;
}

