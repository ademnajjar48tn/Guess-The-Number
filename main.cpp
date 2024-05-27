#include <iostream>

int main() {
	
	srand(time(NULL));
	int randomNum = (std::rand() % 100) + 1;
	std::cout << "Guess a the random number bettween(1, 100) 🎲"<<'\n';
	int guess;
	int tries = 0;
	do {
		std::cout << "Enter number: ";
		if(guess > randomNum) { 
			std::cout << "The number is smaller!\n";
		}
		else if(guess < randomNum){
			std::cout << "The number is larger\n";
		}
		else {
			break;
		}
		std::cin >> guess;
		tries++;
	}
	while(guess!= randomNum);
	std::cout << "You guessed the number in " << tries << " tries 🏆";
	
	return 0;
}
