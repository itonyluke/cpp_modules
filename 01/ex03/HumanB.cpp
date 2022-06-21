#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	this->weapon_b = NULL;
}

HumanB::~HumanB(void)
{
}

void HumanB::attack()
{
	int i = 0, x = 0;
	char c;
	std::string name;
	while (this->name[i])
	{
		c = toupper(this->name[i]);
		std::cout << c;
		i++;
	}
	std::cout << " attacks with his " ;
	if (this->weapon_b)
	{
		name = this->weapon_b->getType();
		while (name[x])
		{
			c = toupper(name[x]);
			std::cout << c;
			x++;
		}
	}
	std::cout << std::endl;
}


void HumanB::setWeapon(Weapon & name_w)
{
	this->weapon_b = &name_w;
}
