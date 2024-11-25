#pragma once
#include <string>
using namespace std;

// Return the default console color
const string RESET = "\033[0m";
// Change the text color to green
const string GREEN = "\033[32m";
// Change the text color to yellow
const string YELLOW = "\033[33m";
const string RED = "\033[31m";
// Change the text color to red
const string CLEARLINE = "\033[F\033[K";
// Clear the line and return the cursor to the beginning of the line

string randomWords();