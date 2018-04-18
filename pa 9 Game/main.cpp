/*Amber Skogen
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

*/


#include <SFML/Graphics.hpp> 
#include "Table.h"
//#include <time.h>
#include "Chair.h"



int main(void)
{
	/**************************************************Initalizing Variables**************************************************************/
	sf::RenderWindow window(sf::VideoMode(800, 400), "SFML works!"); //This changes the window size that pops up, do we want to chang it?
	//table and counter
	//Table t1(*(new sf::Vector2f(300, 15)), sf::Color::Black, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.8)));
	Table counter(*(new sf::Vector2f(760, 15)), sf::Color::Black, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.7)));

	//background //table 
	sf::Texture background, table;
	sf::Sprite ground, sTable, sChair;
	Chair chair(15), chair2(58), chair3(101), chair4(144), chair5(187), chair6(230), chair7(273), chair8(310);

	//may decide to make a seperate chair class at some point or image 
	/*Table chair1(*(new sf::Vector2f(267, 15)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair2(*(new sf::Vector2f(267, 58)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair3(*(new sf::Vector2f(267, 101)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair4(*(new sf::Vector2f(267, 144)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair5(*(new sf::Vector2f(267, 187)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair6(*(new sf::Vector2f(267, 230)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair7(*(new sf::Vector2f(267, 273)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair8(*(new sf::Vector2f(267, 313)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
*/
	//don't know if this is how we will be doing the time
	sf::Time arrival; //until next arrival
	sf::Time eat; //takes to eat
	sf::Time cook; //takes to cook
	sf::Time walkout; //how long Andy is willing to wait

	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);

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
		throw std::runtime_error("could not load chair");
	}
	sTable.setTexture(table);
	//the size we want the table
	sf::Vector2f targetSize(50.0f, 320.0f);
	//changes the size of the table
	sTable.setScale(targetSize.x / sTable.getLocalBounds().width, targetSize.y / sTable.getLocalBounds().height);
	//where we want to table
	sTable.setPosition(*(new sf::Vector2f(300, 15)));
	
	/*-----------------sets chairs--------------------------*/
	//if (!chair.loadFromFile("round-wood1.jpg"))
	//{
	//	throw std::runtime_error("could not load table");
	//}
	//
	//sChair.setTexture(chair);
	////the size we want the table
	//sf::Vector2f targetSizeChair(30.0f, 25.0f);
	////changes the size of the table
	//sChair.setScale(targetSizeChair.x / sChair.getLocalBounds().width, targetSizeChair.y / sChair.getLocalBounds().height);
	////where we want to table
	//sChair.setPosition(*(new sf::Vector2f(267, 15)));
	//sChair.setPosition(*(new sf::Vector2f(267, 58)));
	//sChair.setPosition(*(new sf::Vector2f(267, 101)));


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
		window.draw(counter);
		window.draw(chair.getSprite());
		window.draw(chair2.getSprite());
		window.draw(chair3.getSprite());
		window.draw(chair4.getSprite());
		window.draw(chair5.getSprite());
		window.draw(chair6.getSprite());
		window.draw(chair7.getSprite());
		window.draw(chair8.getSprite());
		window.display();
	}//while window.isOpen()
	


	return 0;
}



