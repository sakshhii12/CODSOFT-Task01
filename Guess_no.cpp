
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(static_cast<unsigned int>(time(NULL)));
  int secretNumber = rand() % 100 + 1;
  int guess, attempts = 0;
  do {
    
    cout << "Enter your guess (1-100): ";
    cin >> guess;
    attempts++;
    if (guess > secretNumber) {
      cout << "Your guess is too high." << endl;
    } else if (guess < secretNumber) {
      cout << "Your guess is too low." << endl;
    } else {
      cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << endl;
      break; 
    }
  } while (true);

  return 0;
}
