#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    int lowerBound, upperBound, secretNumber, guess;
    int maxAttempts, attempts;
    char playAgain;

    do {
        int difficulty;
        cout << "Choose your difficulty level (1- Easy, 2- Medium, 3- Hard): ";
        cin >> difficulty;

        // Set bounds and max attempts based on difficulty
        switch (difficulty) {
            case 1:
                lowerBound  = ; // Hint: Low range
                upperBound  = ; // Hint: High range
                maxAttempts = ; // Hint: Fewer attempts
                break;
            case 2:
                lowerBound =  ; // Hint: Medium low
                upperBound =  ; // Hint: Medium high
                maxAttempts = ; // Hint: More attempts than Easy
                break;
            case 3:
                lowerBound = ; // Hint: Lowest value
                upperBound = ; // Hint: Highest value
                maxAttempts = ; // Hint: Maximum attempts
                break;
            default:
                cout << "Invalid difficulty level! Setting to Easy." << endl;
                lowerBound = 1;
                upperBound = 10;
                maxAttempts = 5;
        }

        // Generate secret number between lowerBound and upperBound
        secretNumber = ____;  // Hint: Use rand() with correct formula

        attempts = 0;
        bool hasGuessedCorrectly = false;

        cout << "I have selected a number between " << lowerBound << " and " << upperBound << ". You have " << maxAttempts << " attempts to guess it!" << endl;

        while ( ____ && !hasGuessedCorrectly) { // Hint: Fill in the condition for the loop
            cout << "Enter your guess: ";
            cin >> guess;

            // Add input validation for the guess
            if (cin.fail() || guess < lowerBound || guess > upperBound) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input! Please guess a number between " << lowerBound << " and " << upperBound << "." << endl;
                continue;
            }

            attempts++;

            if ( ___ ) {  // Hint: Fill in the condition for "Too low"
                cout << "Too low! Try again." << endl;
            } else if ( ___ ) { // Hint: Fill in the condition for "Too high"
                cout << "Too high! Try again." << endl;
            } else {
                cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts!" << endl;
                hasGuessedCorrectly = true;
            }

            // Provide hints based on proximity
            if (!hasGuessedCorrectly && attempts < maxAttempts) {
                if (abs(guess - secretNumber) <= 10) {
                    cout << "You're very close!" << endl;
                } else if (abs(guess - secretNumber) <= 20) {
                    cout << "You're getting there!" << endl;
                }
            }
        }

        if (!hasGuessedCorrectly) {
            cout << "Sorry! You've used all your attempts. The correct number was " << secretNumber << "." << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!" << endl;

    return 0;
}