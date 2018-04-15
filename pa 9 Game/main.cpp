/*Amber Skogen
Tyler

pa 9 Game

influences:
	The beauty that is the internet
	SFML website
	Pong lecture/code
	The glory that is stackoverflow
	The light that guides us home: cplusplus.com
*/


#include <SFML/Graphics.hpp> 
#include "Table.h"
//#include <windows.h> //for color
//#include <time.h>



int main(void)
{
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!"); //This changes the window size that pops up, do we want to chang it?

	Table t1(*(new sf::Vector2f(70, 15)), sf::Color::White, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.8)));
	Table counter(*(new sf::Vector2f(190, 15)), sf::Color::White, *(new sf::Vector2f(window.getSize().x*.05, window.getSize().y*.7)));


	//background should probably be changed from a table class
	//Table background(*(new sf::Vector2f(0, 0)), sf::Color::Red, *(new sf::Vector2f(window.getSize().x*1, window.getSize().y*1)));
	sf::Texture background;

	//may decide to make a seperate chair class at some point
	Table chair1(*(new sf::Vector2f(60, 15)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair2(*(new sf::Vector2f(60, 35)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair3(*(new sf::Vector2f(60, 55)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair4(*(new sf::Vector2f(60, 75)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair5(*(new sf::Vector2f(60, 100)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair6(*(new sf::Vector2f(60, 120)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair7(*(new sf::Vector2f(60, 143)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));
	Table chair8(*(new sf::Vector2f(60, 165)), sf::Color::Yellow, *(new sf::Vector2f(window.getSize().x*.04, window.getSize().y*.05)));

	//don't know if this is how we will be doing the time
	sf::Time arrival; //until next arrival
	sf::Time eat; //takes to eat
	sf::Time cook; //takes to cook
	sf::Time walkout; //how long Andy is willing to wait

	/*This is code I found on cplusplus for setting an image 
	for a sprite*/
	/*.
  sf::Texture imageSource;
  if(!imageSource.loadFromFile("image.png"))
      return EXIT_FAILURE;
  sf::Sprite imageSprite;
  imageSprite.setTexture(imageSource);*/

	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);

	//does weird shit to the background
	//if(!background.loadFromFile("red and white tile.jpg"))
	{
		//cout << "background unable to load" << endl;
		//return 0;
	}

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
		//window.draw(background);
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



