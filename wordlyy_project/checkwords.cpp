#include <iostream> 
#include "utils.h"
using namespace std;

int checkWords(string userWord, string word) {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		int flag = 1;
		if (userWord[i] == word[i]) {
			cout << GREEN;
			cout << userWord[i] << " ";
			cout << RESET;
			count++;
			continue;
		}
		for (int g = 0; g < 5; g++) {
			if (userWord[i] == word[g] && i != g) {
				cout << YELLOW;
				cout << userWord[i] << " ";
				cout << RESET;
				flag = 0;
			}
		}

		if (flag == 1) {
			cout << userWord[i] << " ";
		}
	}

	cout << endl;

	return count;
}