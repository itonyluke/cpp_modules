#include "Zombie.hpp"

int main(void)
{
	Zombie Jake("Jake");
	Jake.announce();
	Zombie* Connor = newZombie("Connor");
	Connor->announce();
	randomChump("Callum");
	delete Connor;
	return (0);
}
