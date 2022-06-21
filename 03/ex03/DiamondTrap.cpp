#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("without_name_clap_name"), ScavTrap(1), FragTrap(1), name("without_name")
{
	std::cout << FGGREY << "DiamondTrap default constructor called " << WHITE << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(1), FragTrap(1), name(name)
{
	std::cout << FGGREY << "DiamondTrap Parametric constructor called !!!! " << WHITE << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << FGGREY << "DiamondTrap Copy constructor called " << WHITE << std::endl;
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << FGGREY << "DiamondTrap destructor called " << WHITE << std::endl;
	return;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Hi! I'm DiamondTrap and my name is " << *this << " and my ClapTrap name is \"" << BOLD_WHITE << this->ClapTrap::getName() << WHITE << "\"" << std::endl;
	//display its name and its clapTrap name.
}

//void DiamondTrap::attack(std::string const &target)
//{
//	return (ScavTrap::attack(target));
//}

std::string DiamondTrap::getName(void) const
{
	return this->name;
}

std::ostream &operator<<(std::ostream &o, DiamondTrap const &i)
{
	o << BOLD_WHITE << "\"" << i.getName() << "\"" << WHITE << GREY << " [" << i.getHitPoints() << ":HP	" << i.getEnergyPoints() << ":EP	" << i.getAttackDamage() << ":AD]" << WHITE;
	return o;
}
