#include <iostream> 
#include <string>
#include <iomanip>
#include "utils.h"
#include "icon.h"
#include "modedecide.h"
using namespace std;

void gamemenu(int modeDecide, int modeCount, string word) {
	int menuDecider; // variable for navigating through the menu

	int backMenu; // second variable for navigating through the menu
	int aboutUs;

	icon();


	cout << setw(73) << "_______" << endl;
	cout << setw(74) << "___ _            |   _   |" << endl;
	cout << setw(74) << "| _ \\ |__ _ _  _  |  / |  |" << endl;
	cout << setw(74) << "|  _/ / _` | || | |  | |  |" << endl;
	cout << setw(74) << "|_| |_\\__,_|\\_, | |  |_|  |" << endl;
	cout << setw(74) << "|__/  |_______|" << endl;


	cout << setw(89) << "_______  " << endl;
	cout << setw(88) << "___         _               _   _              |  ___  |" << endl;
	cout << setw(88) << "|_ _|_ _  __| |_ _ _ _  _ __| |_(_)___ _ _  ___ | |_  ) |" << endl;
	cout << setw(88) << "| || ' \\(_-<  _| '_| || / _|  _| / _ \\ ' \\(_-< |  / /  |" << endl;
	cout << setw(88) << "|___|_||_/__/\\__|_|  \\_,_\\__|\\__|_\\___/_||_/__/ | /___| |" << endl;
	cout << setw(88) << "|_______|" << endl;

	cout << setw(82) << "                                        _______" << endl;
	cout << setw(83) << "    _   _              _     _   _     |  ____ |" << endl;
	cout << setw(83) << "   /_\\ | |__  ___ _  _| |_  | | | |___ | |__ / |" << endl;
	cout << setw(83) << "  / _ \\| '_ \\/ _ \\ || |  _| | |_| (_-< |  |_ \\ |" << endl;
	cout << setw(83) << " /_/ \\_\\_.__/\\___/\\_,_|\\__|  \\___//__/ | |___/ |" << endl;
	cout << setw(83) << "                                       |_______|" << endl;


	cout << setw(72) << "                 ________" << endl;
	cout << setw(73) << " ___     _ _    |  _ _   |" << endl;
	cout << setw(73) << "| __|_ _(_) |_  | | | |_ |" << endl;
	cout << setw(73) << "| _|\\ \\ / |  _| | |_  _| |" << endl;
	cout << setw(73) << "|___/_\\_\\_|\\__| |   |_|  |" << endl;
	cout << setw(73) << "                 |________|" << endl;


	cout << endl;
	cout << endl;
	cout << setw(60) << " ";
	cin >> menuDecider;

	cout << system("cls"); // completely clears the console

	cout << CLEARLINE;

	switch (menuDecider) {

	case 1:
		modedecide(modeDecide, modeCount, word);
		break;



	case 2:
		icon();
		cout << endl;

		cout << setw(75) << "- Your word must be 5 letters." << endl;
		cout << setw(88) << "- Each difficulty gives you a different amount of attempts." << endl;
		cout << setw(93) << "- If your input is invalid, then you will start with medium level." << endl;
		cout << setw(85) << "- If you use up your attempts, then you lose." << endl;
		cout << setw(89) << "- A green letter means it is correct and in the right spot." << endl;
		cout << setw(90) << "- A yellow letter means it is correct but in the wrong spot." << endl;


		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;

		cout << setw(75) << "Press [1] to return to the menu" << endl;
		cout << endl;

		cout << setw(74) << "Press [2] to continue playing" << endl;
		cout << endl;


		cout << endl;
		cout << setw(60) << " ";
		cin >> backMenu;
		cout << system("cls");
		cout << CLEARLINE;

		switch (backMenu) {

		case 1:
			cout << system("cls");
			cout << CLEARLINE;
			gamemenu(modeDecide, modeCount, word);
			break;


		case 2:
			cout << system("cls");
			cout << CLEARLINE;
			modedecide(modeDecide, modeCount, word);
			break;
		}
		break;



	case 3:

		icon();
		cout << endl;

		cout << setw(87) << "We are team X. We are a group of students learning C++" << endl;
		cout << setw(84) << "and we decided to recreate a game named Wordle." << endl;
		cout << setw(89) << "Our team consists of four people - a Front-End Developer," << endl;
		cout << setw(86) << "Back-End Developer, a Designer and a Scrum Trainer." << endl;
		cout << setw(77) << "We hope you enjoy our little game!" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		cout << setw(75) << "Press [1] to return to the menu" << endl;
		cout << endl;

		cout << setw(74) << "Press [2] to continue playing" << endl;
		cout << endl;


		cout << endl;
		cout << setw(60) << " ";
		cin >> aboutUs;
		cout << system("cls");
		cout << CLEARLINE;

		switch (aboutUs) {

		case 1:
			cout << system("cls");
			cout << CLEARLINE;
			gamemenu(modeDecide, modeCount, word);
			break;


		case 2:
			cout << system("cls");
			cout << CLEARLINE;
			modedecide(modeDecide, modeCount, word);
			break;
		}
		break;

	case 4:
		exit(0);
		break;

	}
}