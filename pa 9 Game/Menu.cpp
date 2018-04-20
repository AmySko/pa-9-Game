#include "Menu.h"

Menu::Menu()
{

}

Menu::~Menu()
{

}

int Menu::runMenu()
{
	int option;
	option = getOption();
	switch (option)
	{
	case 1: /*Instructions*/
		Instructions();
		return 1;
		break;

	case 2:/*Start Game*/
		return 2;
		break;

	case 3: /*Exit*/
		return 0;
		break;

	}

}
//print statements for the menu
void Menu::printMenu()
{
	cout << "\t\t***      ***  ****** ***      **  **  ** " << endl;
	cout << "\t\t** *    * **  **     ****    **   **  ** " << endl;
	cout << "\t\t**  *  *  **  ****** ** **  **    **  ** " << endl;
	cout << "\t\t**   **   **  **     **  ****     **  ** " << endl;
	cout << "\t\t**   **   **  ****** **   **      ****** " << endl;

	cout << "\n\n\n " << endl;
	cout << "\t(1) Instructions" << endl;
	cout << "\t(2) Start Game" << endl;
	cout << "\t(3) Exit" << endl;
}
/*calls the print statements for the menu
makes sure its in bounds
returns the option*/
int Menu::getOption()
{
	int option = 0;

	printMenu();
	do {
		cin >> option;
	} while ((option < 0) || (option > 3));
	return option;
}

void Menu::Instructions()
{
	cout << " Timed, serve the Andy's give the Andy's the right food within 2 mins " << endl;
}
