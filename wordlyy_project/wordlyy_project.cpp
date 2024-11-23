#include <iostream> 
#include <string>
#include <windows.h>  //library for colors
#include <algorithm>

using namespace std;

const string RESET = "\033[0m";  
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";


int check_words(string user_word, string word) {
	int count = 0;

	int flag = 0;


	for (int i = 0; i < 5; i++) {
		for (int g = 0; g < 5; g++) {
			if (user_word[i] == word[g]) {
				if (i == g) { //i = 0, пока внутренний цикл for не проработает пять раз (каждый раз когда цикл g заканчивает свою работу i++)
					cout << GREEN;
					cout << user_word[i] << " ";
					cout << RESET;

					flag = 1;

					count++;
				}

				else {
					cout << YELLOW;
					cout << user_word[i] << " ";
					cout << RESET;

					flag = 1;
				}
			}





		}


		if (flag == 1) {
			flag = flag - 1; //обнуляем flag, чтобы когда мы проверяли некст букву, flag не был равен одному
		}

		else if (flag == 0) {
			cout << user_word[i] << " ";


		}


	}
	cout << endl;

	return count;
}


int main() {

	string word = "PLANE";

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

		if (check_words(user_word, word) == 5 && i < 4) {
			cout << endl;

			cout << "YOU  WIN!" << endl;

			break;
		}

		else if (i == 4) {
			cout << endl;

			cout << "YOU  LOST!" << endl;
		}

		
	}



	
}