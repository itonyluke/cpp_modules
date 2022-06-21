#include <iostream>
#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

FlagTrap::FlagTrap(void)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FlagTrap default constructor called " << std::endl;
	return;
}

FlagTrap::FlagTrap(std::string name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	this->setName(name);
	std::cout << "Parametric constructor called " << std::endl;
	return;
}

FlagTrap::FlagTrap(FlagTrap const &src)
{
	std::cout << "Copy constructor called " << std::endl;
	*this = src;
	return;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "FlagTrap destructor called " << std::endl;
	return;
}

void FlagTrap::highFivesGuys()
{
	std::cout << "FlagTrap " << this->getName() << " is asking: \"Hight Five, Guys!\""<< std::endl;
	//дай пять
}

