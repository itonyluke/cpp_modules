#include "Weapon.hpp"

Weapon::Weapon(std::string name_of_type) : type(name_of_type)
{
}

Weapon::~Weapon(void)
{
}

void Weapon::setType(std::string name_of_type)
{
	this->type = name_of_type;
}

std::string const & Weapon::getType()
{
	std::string & ref = this->type;
	return (ref);
}
