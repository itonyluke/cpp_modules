#include "Zombie.hpp"

int main(void)
{
	int	randomNumber;

	srand((unsigned) time(0));
	randomNumber = (rand() % 9) + 1;
	Zombie* zombies = zombieHorde(randomNumber, "\033[100mMi Zombie – ne boimsia temnoty\033[0m");
	delete [] zombies;
	return (0);
}
