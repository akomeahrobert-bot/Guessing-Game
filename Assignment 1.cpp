#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess = 0;

    std::cout << "I have picked a secret number between 1 and 100." << std::endl;

    while (guess != secretNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > secretNumber) {
            std::cout << "Too High!" << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too Low!" << std::endl;
        } else {
            std::cout << "Congratulations! You guessed it." << std::endl;
        }
    }

    return 0;
}

