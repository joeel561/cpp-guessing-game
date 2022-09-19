#include <iostream>
#include <stdlib.h> 

using namespace std;

int main() {
    srand (time(NULL));
    int number = rand() % 100 + 1; 
    int guess = 0;

    do {
        cout << "Guess a number between 1 and 100:";
        cin >> guess;

        if (guess > number) {
            cout << " Too high! \n" << endl; 
        } else if (guess < number ) {
            cout << "Too low \n" << endl; 
        } else {
            cout << "That's right \n" << endl;
        }
    } while (number != guess);
    return 0;
}