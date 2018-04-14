/*Amber Skogen
Tyler

pa 9 Game

influences:
	The beauty that is the internet
	SFML website
	Pong lecture/code
	The glory that is stackoverflow

*/


#include <SFML/Graphics.hpp> 
#include "Table.h"
#include <windows.h> //for color


int main(void)
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	Table t1(*(new sf::Vector2f(20, 15)), sf::Color::White, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.7)));
	Table background(*(new sf::Vector2f(0, 0)), sf::Color::Red, *(new sf::Vector2f(window.getSize().x*1, window.getSize().y*1)));

	/*HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 211);*/
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
		window.draw(background);
		window.draw(t1);
		window.display();
	}
	


	return 0;
}



