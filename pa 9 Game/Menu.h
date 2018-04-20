/**************************************************************
*	Amber Skogen
*	Tyler Scheffler
*	25 April 2018
*	pa 9 Game
*
*
**************************************************************/
#pragma once


#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>

using std::cout;
using std::cin;
using std::endl;

class Menu
{
public:
	Menu();
	~Menu();

	int runMenu();
	
private:
	int getOption();
	void printMenu();
	void Instructions();

};