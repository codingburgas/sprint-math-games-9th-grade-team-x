#include <iostream> 
#include <string>
#include <algorithm>

using namespace std;



string randomWords() {

	srand(time(0)); // used to get a truly random number each time
	int num = rand() % 20; // the variable num takes a random word from the ones we specified // rand() - a function that returns a random number


	string array[20] = { "BRAIN" , "BRICK" , "TABLE" , "PLANT" , "BEACH" , "BROWN" , "HOUSE" , "SNAKE" , "OCEAN" , "MUSIC" , "DREAM" , "SUGAR" ,"LIGHT" , "PARTY" , "BREAD" , "SHINE" , "WATER" , "LEMON" , "HUMID" , "TRAIN" };

	return array[num]; // returns the index where the word (random) is located
}