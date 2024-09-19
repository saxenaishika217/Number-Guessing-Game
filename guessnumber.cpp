#include <iostream>
#include <cstdlib> //for rand() and srand()
#include <ctime> // for time(23)

using namespace std;

int main() {
    srand(time(0)); // Random seed based on time
    int num = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "Guess the number (1 to 100): " << endl;

    // Game loop
    do {
        cout << "Enter guess: ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too high" << endl;
        } else if (guess < num) {
            cout << "Too low" << endl;
        } else {
            cout << "You got it in " << tries << " tries!" << endl;
        }

    } while (guess != num);

    return 0;
}
