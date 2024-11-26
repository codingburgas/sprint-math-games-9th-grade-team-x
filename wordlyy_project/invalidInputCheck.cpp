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

bool Signs(string userWord, bool checker) {
	for (char numSign : userWord) {
		//isdigit() - checks if the given character is a digit or not
		if (isdigit(numSign) || numSign == '+' || numSign == '-' || numSign == '_' || numSign == '=' || numSign == ')' || numSign == '(' || numSign == '*' || numSign == '&' || numSign == '^' || numSign == '%' || numSign == '$' || numSign == '#' || numSign == '@' || numSign == '!' || numSign == '`' || numSign == '~' || numSign == '}' || numSign == '{' || numSign == '[' || numSign == ']' || numSign == ';' || numSign == ':' || numSign == '"' || numSign == '|' || numSign == '?' || numSign == '/' || numSign == '.' || numSign == '>' || numSign == '<' || numSign == ',') {
			checker == true;
			return checker;
		}
	}
	return checker;
}