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
	Table t1(*(new sf::Vector2f(70, 15)), sf::Color::White, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.8)));
	Table counter(*(new sf::Vector2f(190, 15)), sf::Color::White, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.7)));
	Table background(*(new sf::Vector2f(0, 0)), sf::Color::Red, *(new sf::Vector2f(window.getSize().x*1, window.getSize().y*1)));
	
	Table chair1(*(new sf::Vector2f(60, 15)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair2(*(new sf::Vector2f(60, 35)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair3(*(new sf::Vector2f(60, 55)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair4(*(new sf::Vector2f(60, 75)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair5(*(new sf::Vector2f(60, 100)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair6(*(new sf::Vector2f(60, 120)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair7(*(new sf::Vector2f(60, 143)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair8(*(new sf::Vector2f(60, 165)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));

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
		window.draw(counter);
		window.draw(chair1);
		window.draw(chair2);
		window.draw(chair3);
		window.draw(chair4);
		window.draw(chair5);
		window.draw(chair6);
		window.draw(chair7);
		window.draw(chair8);
		window.display();
	}
	


	return 0;
}



