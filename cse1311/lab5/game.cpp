/*****************************************************************************************
CSE 1311 - C++ Programming for Engineers
Brandon K. Thomas
Lab 5c: Guessing_Game

Goal(S): Build a Guessing Game Program
Write a program to implement the Number Guessing Game.  The main method should loop as long a the user wants to play the game again.  Write a function called PlayGame().  In this function write the code to play the game.  In the game the computer chooses a random number between 1 and 100, and the player tries to guess the number in as few attempts as possible.  Each time the player enters a guess,the computer tells him whether the guess is too high, too low, or right.  Once the playet guesses the number, that game is over.
*****************************************************************************************/

#include <iostream>
#include <cstlib>
#include <cstlib>

using namespace std;

int guess;
int answer;
int tries;

int PlayGame() {
	cout << "\n Hello, would you like to play a guessing game? \n";
	
	cout << "\n To play enter a number between 1 and 100. \n";
		cin >> guess;

		if('guess' > 'answer') {
			cout << "\n Your guess is too high! \n";
			tries = 0++;
			cout << "\n Tries = " << tries;
		}

		if ('guess' < 'answer') {
			cout << "Your guess is too low! \n";
		}

		if ('guess' = 'answer') {
			cout << "\n You got it right! \n";

			cout << "\n Goodbye! \n";
		}

}
/*int main() {
	while (true) {

	}
	return 0; */
}