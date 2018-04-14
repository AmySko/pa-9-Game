/*Amber Skogen
Tyler

pa 9 Game

influences:
	The beauty that is the internet
	SFML website
	Pong lecture/code


*/


#include <SFML/Graphics.hpp> 
#include "Table.h"

int main(void)
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	Table t1(*(new sf::Vector2f(20, 15)), sf::Color::White, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.7)));
	
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		//window.draw(shape);
		window.draw(t1);
		window.display();
	}
	


	return 0;
}



