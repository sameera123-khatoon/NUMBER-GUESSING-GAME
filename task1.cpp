#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Enter guess limit: ";
    int lim; cin >> lim;
    srand( time(0) ^ clock() );
    const int num = rand() % lim;
    while (true) {
        cout << "Enter your guess: ";
        int guess; cin >> guess;
        if (guess < num) {
            cout << "your guess is too small, please retry";
            continue; 
        } else if (guess > num) {
            cout << "your guess is too large, please retry";
            continue;
        } else {
            cout << "your have guessed correctly!\n";
            break;
        }
    }
    return 0;
}