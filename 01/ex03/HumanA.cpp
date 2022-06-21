#include "HumanA.hpp"

HumanA::HumanA(std::string name, class Weapon & name_w): name(name)//, weapon_a(name_w)
{
	this->weapon_a = &name_w;
}

HumanA::~HumanA(void)
{
}

void HumanA::attack()
{
	char c;
	std::string name;
	for (unsigned int i = 0; this->name[i]; i++)
	{
		c = toupper(this->name[i]);
		std::cout << c;
	}
	name = this->weapon_a->getType();
	std::cout << " attacks with his " ;
	for (unsigned int j = 0; name[j]; j++)
	{
		c = toupper(name[j]);
		std::cout << c;
	}
	std::cout << std::endl;
}
