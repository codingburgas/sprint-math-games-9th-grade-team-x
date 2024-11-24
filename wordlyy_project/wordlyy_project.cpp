#include <iostream> 
<<<<<<< HEAD
#include <string> 
#include <algorithm> //change the appearance of the text
#include <iomanip> //defines the functions that are used to manipulate the format of the input and output of our program

using namespace std;

//escape code 
const string RESET = "\033[0m"; // return the default console color
const string GREEN = "\033[32m"; // changes the text color to green
const string YELLOW = "\033[33m"; // changes the text color to yellow
const string RED = "\033[31m";  // changes the text color to red
const string CLEAR_LINE = "\033[F\033[K"; // clears the line and returns the cursor to the beginning of the line

void icon() {
=======
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
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98

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
}

string randomWords() { 

	srand(time(0)); // used to get a truly random number each time
	int num = rand() % 20; // the variable num takes a random word from the ones we specified // rand() - a function that returns a random number


	string array[20] = { "BRAIN" , "BRICK" , "TABLE" , "PLANT" , "BEACH" , "BROWN" , "HOUSE" , "SNAKE" , "OCEAN" , "MUSIC" , "DREAM" , "SUGAR" ,"LIGHT" , "PARTY" , "BREAD" , "SHINE" , "WATER" , "LEMON" , "CLOCK" , "TRAIN" };

	return array[num]; // returns the index where the word (random) is located
}


void Secondgamemenu() {
	int menu_decider; // variable for navigating through the menu

	int back_menu; // second variable for navigating through the menu

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


<<<<<<< HEAD
	cout << endl;

	cin >> menu_decider;
=======
	cout << setw(72) << "                 ________" << endl;
	cout << setw(73) << " ___     _ _    |  _ _   |" << endl;
	cout << setw(73) << "| __|_ _(_) |_  | | | |_ |" << endl;
	cout << setw(73) << "| _|\\ \\ / |  _| | |_  _| |" << endl;
	cout << setw(73) << "|___/_\\_\\_|\\__| |   |_|  |" << endl;
	cout << setw(73) << "                 |________|" << endl;


	cin >> menuDecider;
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98

	cout << system("cls"); // completely clears the console

<<<<<<< HEAD
	cout << CLEAR_LINE; // clears the line and moves the cursor to the beginning of the line



	if (menu_decider == 1) { // there is nothing inside the condition because the function ends and the game starts (that is in 'int main')

	}

	else if (menu_decider == 2) { // rules
=======
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

>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98

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

<<<<<<< HEAD
		if (back_menu == 1) { // if the condition is correct, we return to the main menu
			cout << system("cls");
			cout << CLEAR_LINE;

			Secondgamemenu();
=======
		switch (backMenu) {

		case 1:
			cout << system("cls");
			cout << CLEARLINE;
			gamemenu();
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98


		case 2:
			cout << system("cls");
			cout << CLEARLINE;
		}
		break;

<<<<<<< HEAD
		else if (back_menu == 2) { // if the condition is correct, the function ends and the game starts
=======
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98


	case 3:

<<<<<<< HEAD
	}

	else if (menu_decider == 3) { // we exit the game completely

		exit(0); // stops the console from running
	}


	else if (menu_decider != 1 && menu_decider != 2 && menu_decider != 3) {
=======
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98
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
<<<<<<< HEAD
		int flag = 1;
		if (user_word[i] == word[i]) { // i = 0, until the inner for loop runs five times (each time the g loop finishes its work, i++ is executed)
			cout << GREEN;
			cout << user_word[i] << " ";
			cout << RESET;
			count++;
			continue;
		}
=======
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98
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

<<<<<<< HEAD
	int mode_decide; // level selection
	int mode_count = 5; // number of attempts (by default, there are five attempts)
=======

	int modeDecide;


	int modeCount = 5;


>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98

	string word = randomWords(); // the variable word takes a value from another function as a random word

<<<<<<< HEAD
	Secondgamemenu(); // call the function that contains the main menu
=======

	gamemenu();
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98

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



<<<<<<< HEAD
	if (mode_decide == 1) { // if the user selects number 1, they start at the easy level with 8 attempts
		mode_count = 8;
	}

	else if (mode_decide == 2) { // if the user selects number 2, they start at the medium level with 5 attempts
		mode_count = 5;
	}

	else if (mode_decide == 3) { // if the user selects number 3, they start at the hard level with 3 attempts
		mode_count = 3;
	}

	else { // if the user enters something other than 1, 2, or 3, they will default to starting at the medium level
=======
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
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98
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


<<<<<<< HEAD
	for (int i = 0; i < mode_count; i++) { // as long as the user's attempts are not exhausted, they can keep guessing the word
		cin >> user_word;
=======
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98

	string userWord;

<<<<<<< HEAD
		if (user_word.size() != 5) { // the condition checks that the word entered by the user consists of five letters
=======


	for (int i = 0; i < modeCount; i++) {



		cin >> userWord;



		cout << CLEARLINE;



		if (userWord.size() != 5) {
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98
			cout << endl;

			cout << RED << "YOUR WORD MUST INVOLVE 5 LETTERS!" << RESET;

<<<<<<< HEAD
			break; // use break to stop the program from running
		}


		transform(user_word.begin(), user_word.end(), user_word.begin(), toupper); // the first two arguments specify the range in which the letters should be changed, 
        // and the last argument specifies where to start storing the transformed elements

		// transform applies the given function to the range and stores the result in another range, 
       // preserving the original order of elements and starting from user_word.begin()


		if (check_words(user_word, word) == 5 && i < mode_count) { // if the user has typed 5 correct letters (green letters in the right positions) 
                                                                   // and hasn't used all their attempts, they win
=======


			break;
		}




		transform(userWord.begin(), userWord.end(), userWord.begin(), toupper);



		if (checkWords(userWord, word) == 5 && i < modeCount) {
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98
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

<<<<<<< HEAD
		else if (i == mode_count - 1) { // if i = modeCount - 1, the user loses (i starts from zero, so we need to subtract 1)
=======
		else if (i == modeCount - 1) {
>>>>>>> 43a1697e0fbdc6d0770b54846eeb4b5a93cc3d98

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