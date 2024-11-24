#include <iostream> 
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

const string RESET = "\033[0m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string RED = "\033[31m";
const string CLEARLINE = "\033[F\033[K";



string randomWords() {


	srand(time(0));


	int num = rand() % 20;

	string array[20] = { "BRAIN" , "BRICK" , "TABLE" , "PLANT" , "BEACH" , "BROWN" , "HOUSE" , "SNAKE" , "OCEAN" , "MUSIC" , "DREAM" , "SUGAR" ,"LIGHT" , "PARTY" , "BREAD" , "SHINE" , "WATER" , "LEMON" , "CLOCK" , "TRAIN" };


	return array[num];
}



void gamemenu() {
	int menuDecider;

	int backMenu;

	cout << setw(113) << ".--------------.  .--------------.  .--------------.  .--------------.  .--------------.  .--------------." << endl;
	cout << setw(113) << "|  _____  ____ |  |     ____     |  |  _______     |  |  ________    |  |   _____      |  |  _________   |" << endl;
	cout << setw(113) << "||_   _||_   _||  |   .'    `.   |  | |_   __ \\    |  | |_   ___ `.  |  |  |_   _|     |  | |_   ___  |  |" << endl;
	cout << setw(113) << "|  | | /\\ | |  |  |  /  .--.  \\  |  |   | |__) |   |  |   | |   `. \\ |  |    | |       |  |   | |_  \\_|  |" << endl;
	cout << setw(113) << "|  | |/  \\| |  |  |  | |    | |  |  |   |  __ /    |  |   | |    | | |  |    | |   _   |  |   |  _|  _   |" << endl;
	cout << setw(113) << "|  |   /\\   |  |  |  \\  `--'  /  |  |  _| |  \\ \\_  |  |  _| |___.' / |  |   _| |__/ |  |  |  _| |___/ |  |" << endl;
	cout << setw(113) << "|  |__/  \\__|  |  |   `.____.'   |  | |____| |___| |  | |________.'  |  |  |________|  |  | |_________|  |" << endl;
	cout << setw(113) << "|              |  |              |  |              |  |              |  |              |  |              |" << endl;
	cout << setw(113) << "'--------------'  '--------------'  '--------------'  '--------------'  '--------------'  '--------------'" << endl;
	cout << endl;

	cout << setw(69) << "_______" << endl;
	cout << setw(70) << "___ _            |   _   |" << endl;
	cout << setw(70) << "| _ \\ |__ _ _  _  |  / |  |" << endl;
	cout << setw(70) << "|  _/ / _` | || | |  | |  |" << endl;
	cout << setw(70) << "|_| |_\\__,_|\\_, | |  |_|  |" << endl;
	cout << setw(70) << "|__/  |_______|" << endl;


	cout << setw(91) << "_______  " << endl;
	cout << setw(90) << "___         _               _   _              |  ___  |" << endl;
	cout << setw(90) << "|_ _|_ _  __| |_ _ _ _  _ __| |_(_)___ _ _  ___ | |_  ) |" << endl;
	cout << setw(90) << "| || ' \\(_-<  _| '_| || / _|  _| / _ \\ ' \\(_-< |  / /  |" << endl;
	cout << setw(90) << "|___|_||_/__/\\__|_|  \\_,_\\__|\\__|_\\___/_||_/__/ | /___| |" << endl;
	cout << setw(90) << "|_______|" << endl;


	cout << setw(69) << "_______" << endl;
	cout << setw(70) << "___     _ _    |  ____ |" << endl;
	cout << setw(70) << "| __|_ _(_) |_  | |__ / |" << endl;
	cout << setw(70) << "| _|\\ \\ / |  _| |  |_ \\ |" << endl;
	cout << setw(70) << "|___/_\\_\\_|\\__| | |___/ |" << endl;
	cout << setw(70) << "|_______|" << endl;


	cin >> menuDecider;

	cout << system("cls");

	cout << CLEARLINE;

	cout << RED << "W O R D L E" << RESET << endl;

	switch (menuDecider) {

	case 1:
		break;



	case 2:
		cout << endl;

		cout << "- Your word must be 5 letters. " << endl;
		cout << "- Each difficulty gives you a different amount of attempts" << endl;
		cout << "- If your input is invalid, then you will start with medium level. " << endl;
		cout << "- If you use up your attempts, then you lose. " << endl;


		cout << "|| Good luck! ||" << endl;
		cout << endl;

		cout << "Press [1] to return to the menu" << endl;
		cout << endl;

		cout << "Press [2] to continue playing" << endl;
		cout << endl;

		cin >> backMenu;
		cout << system("cls");
		cout << CLEARLINE;

		switch (backMenu) {

		case 1:
			cout << system("cls");
			cout << CLEARLINE;
			gamemenu();


		case 2:
			cout << system("cls");
			cout << CLEARLINE;
		}
		break;



	case 3:
		exit(0);
		break;

	}


}



int checkWords(string userWord, string word) {
	int count = 0;

	int flag = 0;


	for (int i = 0; i < 5; i++) {
		for (int g = 0; g < 5; g++) {
			if (userWord[i] == word[g]) {
				if (i == g) {
					cout << GREEN;
					cout << userWord[i] << " ";
					cout << RESET;

					flag = 1;

					count++;
				}

				else {
					cout << YELLOW;
					cout << userWord[i] << " ";
					cout << RESET;

					flag = 1;
				}
			}





		}


		if (flag == 1) {
			flag = flag - 1;
		}

		else if (flag == 0) {
			cout << userWord[i] << " ";


		}


	}
	cout << endl;

	return count;
}


int main() {


	int modeDecide;


	int modeCount = 5;



	string word = randomWords();


	gamemenu();

	cout << endl;
	cout << "Decide what level do you want to play: " << endl;

	cout << endl;

	cout << "Press [ " << GREEN << "1" << RESET << " ] if you want to start with easy level" << endl;
	cout << "Press [ " << YELLOW << "2" << RESET << " ] if you want to start with medium level" << endl;
	cout << "Press [ " << RED << "3" << RESET << " ] if you want to start with hard level" << endl;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Press [4] if you want to return to the menu" << endl;
	cout << "Press [5] to exit the game" << endl;




	cin >> modeDecide;



	cout << system("cls");


	cout << CLEARLINE;


	switch (modeDecide) {

	case 1:
		modeCount = 8;



	case 2:
		modeCount = 5;


	case 3:
		modeCount = 3;

	case 4:
		break;

	case 5:
		exit(0);
		break;



	default:
		cout << endl;

		cout << "Something went wrong, but you can start with medium" << endl;

	}

	if (modeDecide == 4) {
		gamemenu();

		cout << endl;
		cout << "Decide what level do you want to play: " << endl;

		cout << endl;

		cout << "Press [ " << GREEN << "1" << RESET << " ] if you want to start with easy level" << endl;
		cout << "Press [ " << YELLOW << "2" << RESET << " ] if you want to start with medium level" << endl;
		cout << "Press [ " << RED << "3" << RESET << " ] if you want to start with hard level" << endl;



		cin >> modeDecide;



		cout << system("cls");


		cout << CLEARLINE;




		switch (modeDecide) {

		case 1:
			modeCount = 8;


		case 2:
			modeCount = 5;


		case 3:
			modeCount = 3;
		}

	}


	cout << endl;

	cout << "Write your first guess (only 5 letters) " << endl;



	string userWord;



	for (int i = 0; i < modeCount; i++) {



		cin >> userWord;



		cout << CLEARLINE;



		if (userWord.size() != 5) {
			cout << endl;

			cout << RED << "YOUR WORD MUST INVOLVE 5 LETTERS!" << RESET;



			break;
		}




		transform(userWord.begin(), userWord.end(), userWord.begin(), toupper);



		if (checkWords(userWord, word) == 5 && i < modeCount) {
			cout << endl;

			cout << "YOU  WIN!" << endl;

			string want;

			cout << endl;
			cout << endl;

			cout << "Do you want to play again ?" << endl;
			cout << endl;

			cout << "Y/N" << endl;

			cout << endl;

			cin >> want;

			if (want == "Y" || want == "y") {
				cout << system("cls");
				cout << CLEARLINE;

				main();
			}

			else if (want == "N" || want == "n") {
				cout << system("cls");
				cout << CLEARLINE;


				exit(0);
			}

			else {
				cout << "Your input was invalid";
			}
		}

		else if (i == modeCount - 1) {

			cout << endl;

			cout << "THE WORD WAS " << RED << word << RESET << endl;
			cout << "YOU  LOST!" << endl;

			string want;

			cout << endl;
			cout << endl;

			cout << "Do you want to play again ?" << endl;
			cout << endl;

			cout << "Y/N" << endl;

			cout << endl;

			cin >> want;

			if (want == "Y" || want == "y") {
				cout << system("cls");
				cout << CLEARLINE;

				main();
			}

			else if (want == "N" || want == "n") {
				cout << system("cls");
				cout << CLEARLINE;


				exit(0);
			}

			else {
				cout << "Your input was invalid";
			}


		}


	}




}