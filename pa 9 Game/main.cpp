/*****************************************************************
	Amber Skogen
	Tyler Scheffler
	25 April 2018
	pa 9 Game

influences:
	The beauty that is the internet
	SFML website
	Pong lecture/code
	The glory that is stackoverflow
	The light that guides us home: cplusplus.com
	The excellence of google images
		shutterstock.com
	The humble Ryan
	Gamedev.net

*****************************************************************/

#include "Multiple_images.h"
#include <SFML/Graphics.hpp> 
#include "Furniture.h"
//#include <time.h>
#include "Counter.h"
#include "Table.h"
#include "Chair.h"
#include "food.h"
#include "Menu.h"
#include "Person.h"
#include "Andy.h"
#include "Server.h"

using namespace sf;

int main(void)
{
	/**************************************************Initalizing Variables**************************************************************/
	
	//names of files for the table and the counter
	//string lWall = "wall.jpg", lClosed = "door_closed.jpg", lOpen = "door_open.jpg";

	//calls surface class and goes into image class
	Table table; 
	Counter counter;

	//Surface wall(0, 0, lWall);

	//background 
	sf::Texture background;
	sf::Sprite ground;

	//calls Chair constructor, goes into Images class, sets the positions for the chair
	Chair chair(15), chair2(58), chair3(101), chair4(144), chair5(187), chair6(230), chair7(273), chair8(310);


	//-----------------------consider vectors for multiple food items and chairs--------------------//
	//set food functions 
	Food taco1(760, 55, 1);
	Food cheesecake1(760, 144, 2);
	Food chili1(760, 230, 3);


	vector<Food> Plates;
	Plates.push_back(taco1);


	/*-------------------Characters ------------------------------*/
	Andy andy;
	Server server;


	/*-------------------Time ------------------------------*/

	//don't know if this is how we will be doing the time
	sf::Time arrival; //until next arrival
	sf::Time eat; //takes to eat
	sf::Time cook; //takes to cook
	sf::Time walkout; //how long Andy is willing to wait


	/**************************************************Coding the screen**************************************************************/
	
	/*------------------------------------Menu--------------------------------*/
	Menu menu;
	int option;

	do {
		do {
			option = menu.runMenu();
			if (option == 0)
			{
				return 0;
			}
		} while (option == 1);

		/*-----------------------------Renders Window--------------------------*/

		//changes the window size that pops up
		sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");


		/*--------------------sets the background of restraunt ----------------*/
		if (!background.loadFromFile("red_and_white_tile.jpg"))
		{
			throw std::runtime_error("could not load background");
		}
		ground.setTexture(background);


		/*
		code on spawning multiple enemies I found, perhaps could be usefull for spawning Andy's

		https://www.gamedev.net/forums/topic/650440-help-with-multiple-shapessprites-sfml/

		*/



		/*-----------------------------Window------------------------------------*/
	
		/*


		*/
		while (window.isOpen())
		{
			sf::Event event;

			while (window.pollEvent(event))
			{
				switch(event.type){

				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					cout << event.key.code << endl;
					server.keyListener(event.key.code);
					server.updatePosition();
					break;

				default:
					break;
				}
			}

			
			/*------------------------------Draws----------------------------------*/
			window.clear();

			window.draw(ground);

			window.draw(counter.getSprite());

			window.draw(chair.getSprite());
			window.draw(chair2.getSprite());
			window.draw(chair3.getSprite());
			window.draw(chair4.getSprite());
			window.draw(chair5.getSprite());
			window.draw(chair6.getSprite());
			window.draw(chair7.getSprite());
			window.draw(chair8.getSprite());

			window.draw(table.getSprite());

			//window.draw(server.getSprite());
			//window.draw(andy.getSprite());


			window.draw(cheesecake1.getSprite());
			window.draw(taco1.getSprite());
			window.draw(chili1.getSprite());


			window.display();
		}

	} while (option != 0);

	return 0;
}



