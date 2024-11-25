#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;



string randomWords() {
	// Use to get a truly random number each time
	srand(time(0));
	// Make the variable `num` take a random word from the ones you specified // rand() - a function that returns a random number
	int num = rand() % 20;

	string array[20] = { "BRAIN" , "BRICK" , "TABLE" , "PLANT" , "BEACH" , "BROWN" , "HOUSE" , "SNAKE" , "OCEAN" , "MUSIC" , "DREAM" , "SUGAR" ,"LIGHT" , "PARTY" , "BREAD" , "SHINE" , "WATER" , "LEMON" , "HUMID" , "TRAIN" };

	// Return the index where the word "random" is located
	return array[num];
}