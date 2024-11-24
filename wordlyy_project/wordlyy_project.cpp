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

	int AboutUs;

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


	cin >> menuDecider;

	cout << system("cls");

	cout << CLEARLINE;

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

	switch (menuDecider) {

	case 1:
		break;



	case 2:
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

		cout << endl;

		cout << setw(64) << "About us" << endl;
		
		cout << endl;

		cout << setw(75) << "Press [1] to return to the menu" << endl;
		cout << endl;

		cout << setw(74) << "Press [2] to continue playing" << endl;
		cout << endl;

		cin >> AboutUs;
		cout << system("cls");
		cout << CLEARLINE;

		switch (AboutUs) {

		case 1:
			cout << system("cls");
			cout << CLEARLINE;
			gamemenu();


		case 2:
			cout << system("cls");
			cout << CLEARLINE;
		}
		break;
	    
	case 4:
		exit(0);


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
	cout << setw(79) << "Decide what level do you want to play: " << endl;

	cout << endl;

	cout  << setw(43) << "Press [" << GREEN << "1" << RESET <<  setw(30) << "] if you want to start with easy level" << endl;
	cout << setw(42) << "Press [" << YELLOW << "2" << RESET << setw(30) << "] if you want to start with medium level" << endl;
	cout << setw(43) << "Press [" << RED << "3" << RESET << setw(30) <<  "] if you want to start with hard level" << endl;

	cout << endl;
	cout << endl;
	cout << endl;
	cout << setw(81) << "Press [4] if you want to return to the menu" << endl;
	cout << setw(73) << "Press [5] to exit the game" << endl;




	cin  >> modeDecide;



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

	cout << setw(79) << "Write your first guess (only 5 letters) " << endl;



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