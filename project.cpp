#include <iostream>
using namespace std;
int main() {
  int menuOption;
  cout << "[1] Play" << endl;
  cout << "[2] About us" << endl;
  cout << "[3] Exit" << endl;

  cin >> menuOption;

  if (menuOption == 1) {
    // Here we write code for the game. The 1 is just for testing
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n\n";
    cout << "1" << endl;
  }

  if (menuOption == 2) {
    // Here we write code for the about us. About us is temporary
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"
            "\n\n\n\n\n\n";
    cout << "About us" << endl;
  }

  if (menuOption == 3) {
    // Here we write code for the exit. This code is temporary and needs to be tested
    void exit(int const status);
    void _Exit(int const status);
    void _exit(int const status);
  }
}