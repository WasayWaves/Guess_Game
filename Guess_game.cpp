#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int target = rand() % 100 + 1;

    // Initialize the guess and number of guesses
    int guess = 0;
    int numGuesses = 0;

    // Start the game loop
    while (guess != target) {
        // Get the user's guess
        cout << "Guess a number between 1 and 100: ";
        cin >> guess;

        // Increment the number of guesses
        numGuesses++;

        // Check if the guess is too high or too low
        if (guess > target) {
            cout << "Too high! Try again." << endl;
        } else if (guess < target) {
            cout << "Too low! Try again." << endl;
        }
    }

    // Print the number of guesses and congratulate the player
    cout << "Congratulations, you guessed the number in " << numGuesses << " guesses!" << endl;

    return 0;
}
