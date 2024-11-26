#include <iostream> 
#include <string>
//Change the appearance of the text
#include <algorithm>
//Define the functions that manipulate the format of the input and output of the program
#include <iomanip>
#include "utils.h"
#include "icon.h"
#include "gamemenu.h"
#include "checkwords.h"
#include "modedecide.h"
#include "game.h"
using namespace std;



int main() {
	// Select the level
	int modeDecide = 0;
	// Set the number of attempts (by default, there are five attempts)
	int modeCount = 5; 
	// Make the variable `word` take a value from another function as a random word
	string word = randomWords();


	// Call the function gamemenu
	gamemenu(modeDecide, modeCount, word);
}