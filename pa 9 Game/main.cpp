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
#include <chrono>
#include <iostream>

using namespace sf;

int main(void)
{
	/**************************************************Initalizing Variables**************************************************************/
	/*-----------------------------temp images--------------------------*/

	Images tempServer("Dwight.jpg", 450, 25, 40.0f, 35.0f);
	Images tempTaco("taco_butt.png", 760, 55, 30.0f, 25.0f), tempCheesecake("Cheesecake.png", 760, 144, 30.0f, 25.0f),
		tempChili("chili.png", 760, 230, 30.0f, 25.0f);

	Images table("dark-oak-table-top.jpg", 300, 15, 50.0f, 320.0f), counter("marble2.jpg", 755, 15, 50.0f, 320.0f);



	
	//------Chairs only declared here---------//

	Images chair("round-wood1.jpg", 270, 15, 30.0f, 25.0f), chair2("round-wood1.jpg", 270, 58, 30.0f, 25.0f), chair3("round-wood1.jpg", 270, 101, 30.0f, 25.0f),
		chair4("round-wood1.jpg", 270, 144, 30.0f, 25.0f), chair5("round-wood1.jpg", 270, 187, 30.0f, 25.0f), chair6("round-wood1.jpg", 270, 230, 30.0f, 25.0f),
		chair7("round-wood1.jpg", 270, 273, 30.0f, 25.0f), chair8("round-wood1.jpg", 270, 310, 30.0f, 25.0f);


	Chair chairList[8] = { chair, chair2, chair3, chair4, chair5, chair6, chair7, chair8 };


	
	Food gFood[9] = {tempTaco, tempTaco, tempTaco, tempTaco,tempTaco, tempTaco, tempTaco, tempTaco, tempTaco};
	Food foo(tempTaco);
	//Food *gFood(tempTaco);

	//names of files for the table and the counter
	//string lWall = "wall.jpg", lClosed = "door_closed.jpg", lOpen = "door_open.jpg";

	//background 
	sf::Texture background;
	sf::Sprite ground;

	//calls Chair constructor, goes into Images class, sets the positions for the chair
//	Chair chair(15), chair2(58), chair3(101), chair4(144), chair5(187), chair6(230), chair7(273), chair8(310);


	//-----------------------consider vectors for multiple food items and chairs--------------------//
	////set food functions 
	//Food taco1(760, 55, 1);
	//Food cheesecake1(760, 144, 2);
	//Food chili1(760, 230, 3);
	Food taco1(tempTaco), cheesecake1(tempCheesecake), chili1(tempChili);

	//vector<Food> Plates;
	//Plates.push_back(tempTaco);


	/*-------------------Characters ------------------------------*/

	Server server(tempServer);


	/*-------------------Time ------------------------------*/

	//don't know if this is how we will be doing the time
	sf::Time arrival; //until next arrival
	sf::Time eat; //takes to eat
	sf::Time cook; //takes to cook
	sf::Time walkout; //how long Andy is willing to wait



	

	int carrying = 0;
	int index = 1;
	bool updateI = false;
	int i = 0;
	int carryinga = 2;
	/**************************************************Coding the screen**************************************************************/

	/*------------------------------------Menu--------------------------------*/
	Menu menu;
	int option;
	void srand(int seed);

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
		sf::RenderWindow window(sf::VideoMode(800, 400), "Welcome to 'Menu'!");


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
		//sets time for game to end
		std::chrono::steady_clock::time_point tend = std::chrono::steady_clock::now()
			+ std::chrono::minutes(2);



		//initial time to spawn an andy
		std::chrono::steady_clock::time_point timeToGenAndy = tend - std::chrono::seconds(105);

		//initializes andy array

		Images tempAndy1("o'fallon.png", 0, chairList[0].getYaxis(), 40.0f, 35.0f);
		Images tempAndy2("o'fallon.png", 0, chairList[1].getYaxis(), 40.0f, 35.0f);
		Images tempAndy3("o'fallon.png", 0, chairList[2].getYaxis(), 40.0f, 35.0f);
		Images tempAndy4("o'fallon.png", 0, chairList[3].getYaxis(), 40.0f, 35.0f);
		Images tempAndy5("o'fallon.png", 0, chairList[4].getYaxis(), 40.0f, 35.0f);
		Images tempAndy6("o'fallon.png", 0, chairList[5].getYaxis(), 40.0f, 35.0f);
		Images tempAndy7("o'fallon.png", 0, chairList[6].getYaxis(), 40.0f, 35.0f);
		Images tempAndy8("o'fallon.png", 0, chairList[7].getYaxis(), 40.0f, 35.0f);

		Andy andy1(tempAndy1);
		Andy andy2(tempAndy2);
		Andy andy3(tempAndy3);
		Andy andy4(tempAndy4);
		Andy andy5(tempAndy5);
		Andy andy6(tempAndy6);
		Andy andy7(tempAndy7);
		Andy andy8(tempAndy8);
		Andy AndyArray[8] = {andy1, andy2, andy3, andy4, andy5, andy6, andy7, andy8};
		/*AndyArray[0] = andy1;
		AndyArray[1] = andy2;
		AndyArray[2] = andy3;
		AndyArray[3] = andy4;
		AndyArray[4] = andy5;
		AndyArray[5] = andy6;
		AndyArray[6] = andy7;
		AndyArray[7] = andy8;*/







		while (window.isOpen())
		{


			sf::Event event;

			while (window.pollEvent(event))
			{

				switch (event.type) {

				case Event::Closed:
					window.close();
					break;
				case Event::KeyPressed:
					cout << event.key.code << endl;
					server.keyListener(event.key.code, carrying);
					updateI = gFood[index].cipherKeyGrab(carrying, gFood[i], gFood[i], server.getSprite(), index);
					//displays moving server
					server.display();

					if (index != 1)
					{
						i = index - 1;
					}
					else
					{
						i = 1;
					}

					
					break;
				default:
					break;
				}
				//spawns andys

				//ends game
				if (std::chrono::steady_clock::now() > tend) {
					return 0;
				}
			}


			/*------------------------------Draws----------------------------------*/

			window.clear();

			window.draw(ground);

			window.draw(counter.getSprite());


	
			for (int k = 0; k < 8; k++) {
				if (chairList[k].getChairStatus() == true) {
						window.draw(AndyArray[k].getSprite());
					AndyArray[k].keyListener(3, carryinga);
					AndyArray[k].display();
				//	cout << "WHAT THE HELL RIGHT?!" << std::endl;

				}
				//andy1.keyListener(270, carryinga);
				//andy1.display();
				//andy1.keyListener(270, carryinga);
			}


			window.draw(chair.getSprite());
			window.draw(chair2.getSprite());
			window.draw(chair3.getSprite());
			window.draw(chair4.getSprite());
			window.draw(chair5.getSprite());
			window.draw(chair6.getSprite());
			window.draw(chair7.getSprite());
			window.draw(chair8.getSprite());
			window.draw(table.getSprite());

			window.draw(server.getSprite());

			//ignoring gFood[0]
			window.draw(gFood[1].getSprite());
			window.draw(gFood[2].getSprite());
			window.draw(gFood[3].getSprite());
			window.draw(gFood[4].getSprite());
			window.draw(gFood[5].getSprite());
			window.draw(gFood[6].getSprite());
			window.draw(gFood[7].getSprite());
			window.draw(gFood[8].getSprite());
			
			window.draw(taco1.getSprite());
			window.draw(cheesecake1.getSprite());
			window.draw(chili1.getSprite());


			window.display();
		}

	} while (option != 0);
	return 0;
}

