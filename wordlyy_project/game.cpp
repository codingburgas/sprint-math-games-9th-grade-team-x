#include <iostream> 
#include <string>
#include <algorithm>
#include <iomanip>
#include "utils.h"
#include "icon.h"
#include "gamemenu.h"
#include "checkwords.h"
#include "modedecide.h"
using namespace std; 


void game(int modeDecide, int modeCount, string word){


	string want;
	string userWord;

icon();
cout << endl;
cout << endl;

cout << setw(82) << "Write your first guess (only 5 letters) " << endl;
cout << endl;






for (int i = 0; i < modeCount; i++) {


	cout << endl;
	cout << "                                                        ";
	cin >> userWord;



	cout << CLEARLINE;


	if (userWord.size() != 5) {
		cout << endl;

		cout << setw(52) << RED << "YOUR WORD MUST BE 5 LETTERS!" << RESET << endl;
		cout << endl;
		cout << setw(69) << "Go back to menu?" << endl;

		cout << setw(62) << "Y/N" << endl;

		cout << endl;

		cout << endl;
		cout << setw(60) << " ";
		cin >> want;

		if (want == "Y" || want == "y") {
			cout << system("cls");
			cout << CLEARLINE;

			gamemenu(modeDecide, modeCount, word);
			break;
		}


		if (want == "N" || want == "n") {
			cout << system("cls");
			cout << CLEARLINE;


			exit(0);
		}

		else {
			cout << system("cls");
			cout << CLEARLINE;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

			cout << setw(63) << "Your input was " << RED << "invalid" << RESET << endl;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

		}
	}
	if (userWord.size() != 5) {
		cout << endl;

		cout << setw(52) << RED << "YOUR WORD MUST BE 5 LETTERS!" << RESET << endl;
		cout << endl;
		cout << setw(69) << "Go back to menu?" << endl;

		cout << setw(62) << "Y/N" << endl;

		cout << endl;

		cout << endl;
		cout << setw(60) << " ";
		cin >> want;

		if (want == "Y" || want == "y") {
			cout << system("cls");
			cout << CLEARLINE;

			gamemenu(modeDecide, modeCount, word);
			break;
		}


		if (want == "N" || want == "n") {
			cout << system("cls");
			cout << CLEARLINE;


			exit(0);
		}

		else {
			cout << system("cls");
			cout << CLEARLINE;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

			cout << setw(63) << "Your input was " << RED << "invalid" << RESET << endl;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

		}
	}

	

	cout << endl;
	cout << "                                                        ";
		//Specify the first two arguments to define the range in which the letters should be changed, 
		//and the last argument to specify where to start storing the transformed elements.

		// Apply `transform` to the range, using the given function, and store the result in another range. 
		// Preserve the original order of elements, starting from `user_word.begin()`.

	transform(userWord.begin(), userWord.end(), userWord.begin(), toupper); 


	// If the user has typed 5 correct letters (green letters in the right positions) and hasn't used all their attempts, they win.
	if (checkWords(userWord, word) == 5 && i < modeCount) {

		cout << endl;
		cout << endl;
		cout << endl;

		cout << setw(65) << "YOU  WIN!" << endl;


		cout << endl;
		cout << endl;

		cout << setw(69) << "Go back to menu?" << endl;
		cout << endl;

		cout << setw(62) << "Y/N" << endl;

		cout << endl;

		cout << endl;
		cout << setw(60) << " ";
		cin >> want;

		if (want == "Y" || want == "y") {
			cout << system("cls");
			cout << CLEARLINE;

			gamemenu(modeDecide, modeCount, word);
			break;
		}

		break;

		if (want == "N" || want == "n") {
			cout << system("cls");
			cout << CLEARLINE;


			exit(0);
		} 
		
		else {
			cout << system("cls");
			cout << CLEARLINE;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

			cout << setw(63) << "Your input was " << RED << "invalid" << RESET << endl;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

		}
	}


	// If `i == modeCount - 1`, the user loses (since `i` starts from zero, we need to subtract 1)
	else if (i == modeCount - 1) {

		cout << endl;
		cout << endl;
		cout << endl;


		cout << setw(66) << "YOU  LOST !" << endl;
		cout << endl;
		cout << setw(65) << "THE WORD WAS " << RED << word << RESET << endl;

		string want;

		cout << endl;
		cout << endl;

		cout << setw(69) << "Go back to menu?" << endl;
		cout << endl;

		cout << setw(62) << "Y/N" << endl;

		cout << endl;

		cout << endl;
		cout << setw(60) << " ";
		cin >> want;

		if (want == "Y" || want == "y") {
			cout << system("cls");
			cout << CLEARLINE;

			//Call gamemenu to start the ame from the beginning
			gamemenu(modeDecide, modeCount, word);
			break;
		}


		if (want == "N" || want == "n") {
			cout << system("cls");
			cout << CLEARLINE;


			exit(0);
		}

		else {
			cout << system("cls");
			cout << CLEARLINE;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl; 
			cout << endl;
			cout << endl;
			cout << endl;

			cout << setw(63) << "Your input was " << RED << "invalid" << RESET << endl;

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;

		}


	}


}


}