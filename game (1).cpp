#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime> // For time()
 
using namespace std;
 
int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;
 
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
 
    while (userGuess != secretNumber) {
        cout << "Enter your guess: ";
        cin >> userGuess;
 
        if (userGuess < secretNumber) {
            cout << "Too low. Try again." << endl;
        }
        else if (userGuess > secretNumber) {
            cout << "Too high. Try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number!" << endl;
        }
    }
 
    return 0;
}

