#include <iostream> 
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

const string RESET = "\033[0m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string RED = "\033[31m";
const string CLEAR_LINE = "\033[F\033[K";

string randomWords() {

	srand(time(0));
	int num = rand() % 20;


	string array[20] = { "BRAIN" , "BRICK" , "TABLE" , "PLANT" , "BEACH" , "BROWN" , "HOUSE" , "SNAKE" , "OCEAN" , "MUSIC" , "DREAM" , "SUGAR" ,"LIGHT" , "PARTY" , "BREAD" , "SHINE" , "WATER" , "LEMON" , "CLOCK" , "TRAIN" };

	return array[num];
}


void gamemenu() {
	int menu_decider;

	int back_menu;

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


	cin >> menu_decider;

	cout << system("cls");

	cout << CLEAR_LINE;



	if (menu_decider == 1) {

	}

	else if (menu_decider == 2) {


		cout << endl;

		cout << "- Your word must envolve only 5 letters. " << endl;
		cout << "- If you use more than the number of attempts given to you, then you lose. " << endl;
		cout << "- If, when choosing a difficulty level, you choose the wrong level, then by default you will start with medium level. " << endl;

		cout << "|| Good luck! ||" << endl;
		cout << endl;

		cout << "Press [1] to return to the menu" << endl;
		cout << endl;

		cout << "Press [2] to continue playing" << endl;
		cout << endl;

		cin >> back_menu;

		cout << system("cls");
		cout << CLEAR_LINE;

	}

	else if (menu_decider == 3) {

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
	gamemenu();

	string word = randomWords();

	cout << "Write your first guess (only 5 letters) " << endl;

	string user_word;


	for (int i = 0; i < 5; i++) {
		cin >> user_word;

		if (user_word.size() < 5) {
			cout << endl;

			cout << "YOUR WORD MUST INVOLVE 5 LETTERS!";

			break;
		}

		transform(user_word.begin(), user_word.end(), user_word.begin(), toupper);

		if (check_words(user_word, word) == 5 && i < mode_count) {
			cout << endl;

			cout << "YOU  WIN!" << endl;

			string want;

			cout << endl;
			cout << endl;

			cout << "Do you want to " << RED << "play again ?" << RESET << endl;
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

		else if (i == mode_count - 1) {

			cout << endl;

			cout << "THE WORD WAS " << RED << word << RESET << endl;
			cout << "YOU  LOST!" << endl;

			string want;

			cout << endl;
			cout << endl;

			cout << "Do you want to " << RED << "play again ?" << RESET << endl;
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


	}




}