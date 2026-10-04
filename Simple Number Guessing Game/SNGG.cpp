#include <iostream>
using namespace std;

int getSecretNumber();
void displayHistory(int guessHistory[], int attempts);
void displayResult(int attempts);

int getSecretNumber() {
    return 7;
}

void displayHistory(int guessHistory[], int attempts) {
    cout << "\n Your guesses: ";
    for (int attempt = 0; attempt < attempts; attempt++) {
        cout << guessHistory[attempt] << " ";
    }
    cout << endl;
}

void displayResult(int attempts) {
    if (attempts == 1) {
        cout << "Lucky guess on your first try!";
    } else if (attempts <= 3) {
        cout << "Great Try! Very few attempts!";
    } else if (attempts <= 6) {
        cout << "Good, You got it eventually!";
    } else {
        cout << "Better luck next time!";
    }
}

int main() {

    int secretNumber;
    int playerGuess = 0;
    int attempts = 0;
    int guessHistory[10];

    secretNumber = getSecretNumber();

    cout << "\n --- # Welcome to Number Guessing Game! # --- \n";

    while (playerGuess != secretNumber) {
        cout << "\n Guess a number between 1 and 10";
        cout << "\n Enter a number : ";
        cin >> playerGuess;

        guessHistory[attempts] = playerGuess;
        attempts++;

            if (playerGuess > secretNumber) {
            cout << "Too high! Try again!";
        } else if (playerGuess < secretNumber) {
            cout << "Too low! Try again!";
        } else {
            cout << "Correct! You got it in " << attempts << " Attemps!";
        }
    }

    displayHistory(guessHistory, attempts);
    displayResult(attempts);

    return 0;

}


