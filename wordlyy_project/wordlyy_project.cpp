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

	srand(time(0)); // used to get a truly random number each time
	int num = rand() % 20; // the variable num takes a random word from the ones we specified // rand() - a function that returns a random number


	string array[20] = { "BRAIN" , "BRICK" , "TABLE" , "PLANT" , "BEACH" , "BROWN" , "HOUSE" , "SNAKE" , "OCEAN" , "MUSIC" , "DREAM" , "SUGAR" ,"LIGHT" , "PARTY" , "BREAD" , "SHINE" , "WATER" , "LEMON" , "CLOCK" , "TRAIN" };

	return array[num]; // returns the index where the word (random) is located
}


void Secondgamemenu() {
	int menuDecider; // variable for navigating through the menu

	int backMenu; // second variable for navigating through the menu
	int aboutUs;

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

	cout << system("cls"); // completely clears the console

	cout << CLEARLINE;

	switch (menuDecider) {

	case 1:
		break;



	case 2:
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
			Secondgamemenu();


		case 2:
			cout << system("cls");
			cout << CLEARLINE;
		}
		break;



	case 3:

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

		cout << setw(64) << "About us" << endl;

		cout << endl;

		cout << setw(75) << "Press [1] to return to the menu" << endl;
		cout << endl;

		cout << setw(74) << "Press [2] to continue playing" << endl;
		cout << endl;

		cin >> aboutUs;
		cout << system("cls");
		cout << CLEARLINE;

		switch (aboutUs) {

		case 1:
			cout << system("cls");
			cout << CLEARLINE;
			Secondgamemenu();


		case 2:
			cout << system("cls");
			cout << CLEARLINE;
		}
		break;

	case 4:
		exit(0);


	}
}



int check_words(string user_word, string word) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		int flag = 1;
		if (user_word[i] == word[i])
		{
			cout << GREEN;
			cout << user_word[i] << " ";
			cout << RESET;
			count++;
			continue;
		}
		for (int g = 0; g < 5; g++) {
			if (user_word[i] == word[g] && i != g)
			{
				cout << YELLOW;
				cout << user_word[i] << " ";
				cout << RESET;
				flag = 0;
			}
			break;
		}

		if (flag)
		{
			cout << user_word[i] << " ";
		}
	}

	cout << endl;

	return count;
}


int main() {

	int modeDecide; // level selection
	int modeCount = 5; // number of attempts (by default, there are five attempts)

	string word = randomWords(); // the variable word takes a value from another function as a random word

	Secondgamemenu(); // call the function that contains the main menu

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
		Secondgamemenu();

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

			break; // use break to stop the program from running
		}


		transform(userWord.begin(), userWord.end(), userWord.begin(), toupper); // the first two arguments specify the range in which the letters should be changed, 
		// and the last argument specifies where to start storing the transformed elements

		// transform applies the given function to the range and stores the result in another range, 
	   // preserving the original order of elements and starting from user_word.begin()


		if (check_words(userWord, word) == 5 && i < modeCount) { // if the user has typed 5 correct letters (green letters in the right positions) 
			// and hasn't used all their attempts, they win
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

		else if (i == modeCount - 1) { // if i = modeCount - 1, the user loses (i starts from zero, so we need to subtract 1)

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

				main(); // call main to restart the game (code) from the beginning
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