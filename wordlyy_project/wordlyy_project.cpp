#include <iostream> 
#include <string>
#include <algorithm>
#include <iomanip>
#include "utils.h"
#include "icon.h"
#include "gamemenu.h"
#include "checkwords.h"
#include "modedecide.h"
#include "game.h"
using namespace std;



int main() {
	int modeDecide = 0; // level selection
	int modeCount = 5; // number of attempts (by default, there are five attempts)

	string word = randomWords(); // the variable word takes a value from another function as a random word


	gamemenu(modeDecide, modeCount, word);


	//game(modeDecide, modeCount, word);
	
}