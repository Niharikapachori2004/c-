#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    bool correct = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have generated a random number between 1 and 100." << endl;

    while (!correct)
    {

        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is correct, too high, or too low
        if (guess > randomNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number!" << endl;
            correct = true;
        }
    }

    return 0;
}
