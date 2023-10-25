#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int secretNumber = rand() % 100 + 1;
    int myguess;
    int attempts = 0;
    do {
       cout << "Enter your guess (between 1 and 100): ";
       cin >> myguess;
        attempts++;
        if (myguess > secretNumber) {
            cout << "Too high!" << endl;
        } else if (myguess < secretNumber) {
            cout << "Too low!" << endl;
        } else {
            cout << "Congratulations! You found the secret number in " << attempts << " attempts." << std::endl;
        }
    } while (myguess != secretNumber);
    return 0;
}
