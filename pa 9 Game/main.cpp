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
#include "Table.h"
//#include <time.h>
#include "Chair.h"
#include "food.h"


int main(void)
{
	/**************************************************Initalizing Variables**************************************************************/
	//changes the window size that pops up
	sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!"); 
	//table
	//Table t1(*(new sf::Vector2f(300, 15)), sf::Color::Black, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.8)));
	
	//background //table //counter
	sf::Texture background, table, counter;
	sf::Sprite ground, sTable, sCounter;

	//calls Chair constructor, goes into Images class, sets the positions for the chair
	Chair chair(15), chair2(58), chair3(101), chair4(144), chair5(187), chair6(230), chair7(273), chair8(310);

	//set food functions //-----------------------consider vectors for multiple food items and chairs--------------------//
	vector<Food> taco;
	//taco.push_back(15, "taco_butt.png");
	Food taco1(15, "taco_butt.png");
	Food cheesecake1(15, "Cheesecake.png");
	Food chili1(15, "chili.png");

	//don't know if this is how we will be doing the time
	sf::Time arrival; //until next arrival
	sf::Time eat; //takes to eat
	sf::Time cook; //takes to cook
	sf::Time walkout; //how long Andy is willing to wait


	/**************************************************Coding the screen**************************************************************/
	
	//should make a menu



	/*-----------------sets the background----------------*/
	if (!background.loadFromFile("red_and_white_tile.jpg"))
	{
		throw std::runtime_error("could not load background");
	}
	ground.setTexture(background);

	/*-----------------sets table--------------------------*/
	if (!table.loadFromFile("dark-oak-table-top.jpg"))
	{
		throw std::runtime_error("could not load table");
	}
	sTable.setTexture(table);
	//the size we want the table
	sf::Vector2f targetSize(50.0f, 320.0f);
	//changes the size of the table
	sTable.setScale(targetSize.x / sTable.getLocalBounds().width, targetSize.y / sTable.getLocalBounds().height);
	//where we want to table
	sTable.setPosition(*(new sf::Vector2f(300, 15)));

	/*-----------------sets counter--------------------------*/
	if (!counter.loadFromFile("marble2.jpg"))
	{
		throw std::runtime_error("could not load counter");
	}
	sCounter.setTexture(counter);
	//the size we want the counter
	sf::Vector2f targetSizeCounter(50.0f, 320.0f);
	//changes the size of the counter
	sCounter.setScale(targetSizeCounter.x / sCounter.getLocalBounds().width, targetSizeCounter.y / sCounter.getLocalBounds().height);
	//where we want to counter
	sCounter.setPosition(*(new sf::Vector2f(760, 15)));



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
		window.draw(ground);
		window.draw(sTable);
		//window.draw(t1);
		window.draw(sCounter);
		window.draw(chair.getISprite());
		window.draw(chair2.getISprite());
		window.draw(chair3.getISprite());
		window.draw(chair4.getISprite());
		window.draw(chair5.getISprite());
		window.draw(chair6.getISprite());
		window.draw(chair7.getISprite());
		window.draw(chair8.getISprite());

	/*	window.draw(cheesecake1.getSprite());
		window.draw(taco1.getSprite());
		window.draw(chili1.getSprite());*/

		window.display();
	}//while window.isOpen()
	


	return 0;
}



