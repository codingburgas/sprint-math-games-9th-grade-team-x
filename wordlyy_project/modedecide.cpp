#include <iostream> 
#include <string>
#include <algorithm>
#include <iomanip>
#include "utils.h"
#include "icon.h"
#include "gamemenu.h"
#include "checkwords.h"
#include "game.h"
using namespace std; 

void modedecide(int modeDecide, int modeCount, string word) {

	icon();

	cout << endl;
	cout << setw(79) << "Decide what level do you want to play: " << endl;

	cout << endl;

	cout << setw(43) << "Press [" << GREEN << "1" << RESET << setw(30) << "] if you want to start with easy level" << endl;
	cout << setw(42) << "Press [" << YELLOW << "2" << RESET << setw(30) << "] if you want to start with medium level" << endl;
	cout << setw(43) << "Press [" << RED << "3" << RESET << setw(30) << "] if you want to start with hard level" << endl;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(81) << "Press [4] if you want to return to the menu" << endl;
	cout << setw(73) << "Press [5] to exit the game" << endl;



	cout << endl;
	cout << setw(60) << " ";
	cin >> modeDecide;



	cout << system("cls");


	cout << CLEARLINE;


	switch (modeDecide) {
	case 1:
		modeCount = 8;
		game(modeDecide, modeCount, word);
		break;



	case 2:
		modeCount = 5;
		game(modeDecide, modeCount, word);
		break;


	case 3:
		modeCount = 3;
		game(modeDecide, modeCount, word);
		break;

	case 4:

		gamemenu(modeDecide, modeCount, word);
		break;

	case 5:
		exit(0);
		break;



	default:
		cout << endl;

		cout << "Something went wrong, but you can start with medium" << endl;

	}

	/*if (modeDecide == 4) {
		gamemenu(modeDecide, modeCount, word);
		
		icon();

		cout << endl;
		cout << setw(79) << "Decide what level do you want to play: " << endl;

		cout << endl;

		cout << setw(43) << "Press [" << GREEN << "1" << RESET << setw(30) << "] if you want to start with easy level" << endl;
		cout << setw(42) << "Press [" << YELLOW << "2" << RESET << setw(30) << "] if you want to start with medium level" << endl;
		cout << setw(43) << "Press [" << RED << "3" << RESET << setw(30) << "] if you want to start with hard level" << endl;



		cout << endl;
		cout << setw(60) << " ";
		cin >> modeDecide;



		cout << system("cls");


		cout << CLEARLINE;




		switch (modeDecide) {

		case 1:
			modeCount = 8;
			break;


		case 2:
			modeCount = 5;
			break;


		case 3:
			modeCount = 3;
			break;
		}

	} */

}