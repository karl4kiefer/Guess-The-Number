#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string rdy;
    char input;

    cout << "\nGuess The Number 1-500. Are you ready? (type anything):";
    cin >> rdy;
    cout << endl;

    do {
        int guess;  
        srand(time(0));                  // Random Number
        int randomNumber = rand() % 501;

        for (int r = 6; r >= 0; r--) {
            cout << "Guess the Number (integer): ";
            cin >> guess;

            if (guess < randomNumber) {
                cout << "Higher! " << r << " attempts remaining.\n\n";
            } else if (guess > randomNumber) {
                cout << "Lower! " << r << " attempts remaining.\n\n";       // Where the number is, whether higher, lower, or correct.
            } else if (guess == randomNumber) {
                cout << "Correct! Finished with " << r << " attempt(s) remaining.\n\n";
                r = 0;      // How many attempts were remaining after finishing?
            } else {
                guess = 0;
                r = 0;
            }
        }

        if (guess != randomNumber) {
            cout << "Failed! Correct answer was: " << randomNumber << endl << endl;
        }   // If failed, what was the number?

        cout << "Would you like to play again? (y/n): ";
        cin >> input;       // Play again.
        cout << endl;
        
    }
    while (input == 'y');

    return 0;
}
