#include <iostream>
#include <cstdlib>
#include <random>

int main()
{
	srand(time(nullptr));
	int number = rand() % 100 + 1;
	int guess;

	do
	{
		std::cout << "Guess a number between 1 and 100:" << std::endl;
		std::cin >> guess;

		if (guess > number)
			std::cout << " Too high! \n" << std::endl;
		else if (guess < number)
			std::cout << "Too low \n" << std::endl;
		else
			std::cout << "That's right \n" << std::endl;
	} while (number != guess);

	return 0;
}