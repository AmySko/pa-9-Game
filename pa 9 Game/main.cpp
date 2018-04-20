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
	The humble Ryan

*****************************************************************/

#include "Multiple_images.h"
#include <SFML/Graphics.hpp> 
#include "Surface.h"
//#include <time.h>
#include "Chair.h"
#include "food.h"
#include "Menu.h"


int main(void)
{
	/**************************************************Initalizing Variables**************************************************************/
	
	//names of files for the table and the counter
	string lTable = "dark-oak-table-top.jpg", lCounter = "marble2.jpg";

	//calls surface class and goes into image class
	Surface table(300, 15, lTable), counter(760, 15, lCounter);

	//background 
	sf::Texture background;
	sf::Sprite ground;

	//calls Chair constructor, goes into Images class, sets the positions for the chair
	Chair chair(15), chair2(58), chair3(101), chair4(144), chair5(187), chair6(230), chair7(273), chair8(310);

	//-----------------------consider vectors for multiple food items and chairs--------------------//
	//set food functions 
	Food taco1(15, 1);
	Food cheesecake1(35, 2);
	Food chili1(55, 3);

	vector<Food> Plates;
	Plates.push_back(taco1);


	//don't know if this is how we will be doing the time
	sf::Time arrival; //until next arrival
	sf::Time eat; //takes to eat
	sf::Time cook; //takes to cook
	sf::Time walkout; //how long Andy is willing to wait


	/**************************************************Coding the screen**************************************************************/
	
	//should make a menu
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

		//changes the window size that pops up
		sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!");

		/*-----------------sets the background of restraunt ----------------*/
		if (!background.loadFromFile("red_and_white_tile.jpg"))
		{
			throw std::runtime_error("could not load background");
		}
		ground.setTexture(background);


		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{

				if (event.type == sf::Event::Closed)
					window.close();
			}


			window.clear();
			window.draw(ground);
			window.draw(table.getISprite());
			window.draw(counter.getISprite());
			window.draw(chair.getISprite());
			window.draw(chair2.getISprite());
			window.draw(chair3.getISprite());
			window.draw(chair4.getISprite());
			window.draw(chair5.getISprite());
			window.draw(chair6.getISprite());
			window.draw(chair7.getISprite());
			window.draw(chair8.getISprite());

			/*window.draw(cheesecake1.getISprite());
			window.draw(taco1.getISprite());
			window.draw(chili1.getISprite());*/

			window.display();
		}//while window.isOpen()

	} while (option != 0);

	return 0;
}



