#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	std::cout << "\033[90m*********************************************\033[0m" << std::endl;
	{
		Weapon club = Weapon("crude_spiked_club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some_other_type_of_club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude_spiked_club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some_other_type_of_club");
		jim.attack();
	}
	std::cout << "\033[90m*********************************************\033[0m" << std::endl;
	return (0);
}
