#include <iostream> 
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

	cout << setw(10) << "              .--------------.  .--------------.  .--------------.  .--------------.  .--------------.  .--------------." << endl;
	cout << setw(10) << "              | _____  _____ |  |     ____     |  |  _______     |  |  ________    |  |   _____      |  |  _________   |" << endl;
	cout << setw(10) << "              ||_   _||_   _||  |   .'    `.   |  | |_   __ \\    |  | |_   ___ `.  |  |  |_   _|     |  | |_   ___  |  |" << endl;
	cout << setw(10) << "              |  | | /\\ | |  |  |  /  .--.  \\  |  |   | |__) |   |  |   | |   `. \\ |  |    | |       |  |   | |_  \\_|  |" << endl;
	cout << setw(10) << "              |  | |/  \\| |  |  |  | |    | |  |  |   |  __ /    |  |   | |    | | |  |    | |   _   |  |   |  _|  _   |" << endl;
	cout << setw(10) << "              |  |   /\\   |  |  |  \\  `--'  /  |  |  _| |  \\ \\_  |  |  _| |___.' / |  |   _| |__/ |  |  |  _| |___/ |  |" << endl;
	cout << setw(10) << "              |  |__/  \\__|  |  |   `.____.'   |  | |____| |___| |  | |________.'  |  |  |________|  |  | |_________|  |" << endl;
	cout << setw(10) << "              |              |  |              |  |              |  |              |  |              |  |              |" << endl;
	cout << setw(10) << "              '--------------'  '--------------'  '--------------'  '--------------'  '--------------'  '--------------'" << endl;
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

	cout << setw(10) << "                                                                      _______" << endl;
	cout << setw(10) << "                                                    ___ _            |   _   |" << endl;
	cout << setw(10) << "                                                   | _ \\ |__ _ _  _  |  / |  |" << endl;
	cout << setw(10) << "                                                   |  _/ / _` | || | |  | |  |" << endl;
	cout << setw(10) << "                                                   |_| |_\\__,_|\\_, | |  |_|  |" << endl;
	cout << setw(10) << "                                                               |__/  |_______|" << endl;
	cout << setw(10) << "                                                                                      _______  " << endl;
	cout << setw(10) << "                                      ___         _               _   _              |  ___  |" << endl;
	cout << setw(10) << "                                     |_ _|_ _  __| |_ _ _ _  _ __| |_(_)___ _ _  ___ | |_  ) |" << endl;
	cout << setw(10) << "                                      | || ' \\(_-<  _| '_| || / _|  _| / _ \\ ' \\(_-< |  / /  |" << endl;
	cout << setw(10) << "                                     |___|_||_/__/\\__|_|  \\_,_\\__|\\__|_\\___/_||_/__/ | /___| |" << endl;
	cout << setw(10) << "                                                                                     |_______|" << endl;


	cout << setw(10) << "                                                                     _______" << endl;
	cout << setw(10) << "                                                     ___     _ _    |  ____ |" << endl;
	cout << setw(10) << "                                                    | __|_ _(_) |_  | |__ / |" << endl;
	cout << setw(10) << "                                                    | _|\\ \\ / |  _| |  |_ \\ |" << endl;
	cout << setw(10) << "                                                    |___/_\\_\\_|\\__| | |___/ |" << endl;
	cout << setw(10) << "                                                                    |_______|" << endl;


	cout << endl;

	cin >> menu_decider;

	cout << system("cls"); // completely clears the console

	cout << CLEAR_LINE; // clears the line and moves the cursor to the beginning of the line



	if (menu_decider == 1) { // there is nothing inside the condition because the function ends and the game starts (that is in 'int main')

	}

	else if (menu_decider == 2) { // rules

		cout << endl;

		cout << "- Your word must envolve only 5 letters. " << endl;
		cout << "- If you use more than the number of attempts given to you, then you lose. " << endl;
		cout << "- If, when choosing a difficulty level, you choose the wrong level, then by default you will start with medium level. " << endl;

		cout << "|| Good luck! ||" << endl;
		cout << endl;

		cout << "Press [ 1 ] to return to the menu" << endl;
		cout << endl;

		cout << "Press [ 2 ] to continue playing" << endl;
		cout << endl;

		cin >> back_menu;

		if (back_menu == 1) { // if the condition is correct, we return to the main menu
			cout << system("cls");
			cout << CLEAR_LINE;

			Secondgamemenu();

		}

		else if (back_menu == 2) { // if the condition is correct, the function ends and the game starts

		}

		cout << system("cls");
		cout << CLEAR_LINE;

	}

	else if (menu_decider == 3) { // we exit the game completely

		exit(0); // stops the console from running
	}


	else if (menu_decider != 1 && menu_decider != 2 && menu_decider != 3) {
		cout << endl;

		cout << RED << "SOMETHING WENT WRONG!" << RESET << endl;

		exit(0);
	}
}


int check_words(string user_word, string word) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		int flag = 1;
		if (user_word[i] == word[i]) { // i = 0, until the inner for loop runs five times (each time the g loop finishes its work, i++ is executed)
			cout << GREEN;
			cout << user_word[i] << " ";
			cout << RESET;
			count++;
			continue;
		}
		for (int g = 0; g < 5; g++) {
			if (user_word[i] == word[g] && i != g) {
				cout << YELLOW;
				cout << user_word[i] << " ";
				cout << RESET;
				flag = 0;
				break;
			}

		}
		if (flag == 1) {
			cout << user_word[i] << " ";
		}
	}



	cout << endl;

	return count;
}



int main() {

	int mode_decide; // level selection
	int mode_count = 5; // number of attempts (by default, there are five attempts)

	string word = randomWords(); // the variable word takes a value from another function as a random word

	Secondgamemenu(); // call the function that contains the main menu

	cout << endl;
	cout << "Decide what level do you want to play: " << endl;

	cout << endl;

	cout << "Press [ " << GREEN << "1" << RESET << " ] if you want to start with easy level" << endl;
	cout << "Press [ " << YELLOW << "2" << RESET << " ] if you want to start with medium level" << endl;
	cout << "Press [ " << RED << "3" << RESET << " ] if you want to start with hard level" << endl;

	cout << endl;

	cin >> mode_decide;

	cout << system("cls");

	cout << CLEAR_LINE;



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
		cout << endl;

		cout << "Something went wrong, but you can start with medium" << endl;


	}

	cout << endl;

	cout << "Write your first guess (only 5 letters) " << endl;

	string user_word;

	for (int i = 0; i < mode_count; i++) { // as long as the user's attempts are not exhausted, they can keep guessing the word
		cin >> user_word;

		cout << CLEAR_LINE;

		if (user_word.size() != 5) { // the condition checks that the word entered by the user consists of five letters
			cout << endl;

			cout << RED << "YOUR WORD MUST INVOLVE 5 LETTERS!" << RESET;

			break; // use break to stop the program from running
		}


		transform(user_word.begin(), user_word.end(), user_word.begin(), toupper); // the first two arguments specify the range in which the letters should be changed, 
        // and the last argument specifies where to start storing the transformed elements

		// transform applies the given function to the range and stores the result in another range, 
       // preserving the original order of elements and starting from user_word.begin()


		if (check_words(user_word, word) == 5 && i < mode_count) { // if the user has typed 5 correct letters (green letters in the right positions) 
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
				cout << CLEAR_LINE;

				main();
			}

			else if (want == "N" || want == "n") {
				cout << system("cls");
				cout << CLEAR_LINE;


				exit(0);
			}

			else {
				cout << "Your input was invalid";
			}
		}

		else if (i == mode_count - 1) { // if i = modeCount - 1, the user loses (i starts from zero, so we need to subtract 1)

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
				cout << CLEAR_LINE;

				main(); // call main to restart the game (code) from the beginning
			}

			else if (want == "N" || want == "n") {
				cout << system("cls");
				cout << CLEAR_LINE;


				exit(0);
			}

			else {
				cout << "Your input was invalid";
			}


		}


	}




}