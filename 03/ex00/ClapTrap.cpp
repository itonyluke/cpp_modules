#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("cl4p-tp"), hitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << GREY << "ClapTrap default constructor called " << WHITE << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
	hitpoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << GREY << "ClapTrap parametric constructor called " << WHITE << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << GREY << "ClapTrap copy constructor called " << WHITE << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << GREY << "ClapTrap Destructor called " << WHITE << std::endl;
	return;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout <<  "ClapTrap " << BOLD_WHITE << *this << WHITE << " attacks " << BOLD_WHITE << target << WHITE << ", causing " << BOLD_WHITE << "1" << WHITE << " points of damage!" << std::endl;
	attackDamage++;
	//Атакует цель нанося 1 единицy поражения.
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << *this;
	// std::cout << "hit points" << attackDamage;
	int m = hitpoints - amount;
	if (m >= 0)
	{
		hitpoints = hitpoints - amount;
		std::cout << " takes damage and lost " << BOLD_WHITE << amount << WHITE << " hit points!" << std::endl;
		//Получает урон в Y очков.
		std::cout << "ClapTrap " << *this << " now has " << BOLD_WHITE << hitpoints << WHITE << " hit points!" << std::endl;
	}
	else
		std::cout << " can't take damage of " << BOLD_WHITE << amount << WHITE << " hit points, because he has just " << BOLD_WHITE << hitpoints << WHITE << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << *this;
	energyPoints = energyPoints + amount;
	std::cout << " is repaired" << " and got " << BOLD_WHITE << amount << WHITE << " points of enegry!" << std::endl;
	//Отремонтирован
	std::cout << "ClapTrap " << *this << " now has " << BOLD_WHITE << energyPoints << WHITE << " energy points!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return this->name;
}

int ClapTrap::getHitPoints(void) const
{
	return this->hitpoints;
}

int ClapTrap::getEnergyPoints(void) const
{
	return this->energyPoints;
}

int ClapTrap::getAttackDamage(void) const
{
	return this->attackDamage;
}

void ClapTrap::setName(std::string name)
{
	std::cout << *this;
	this->name = name;
	std::cout << " now has " << *this << " name!" << std::endl;
}

void ClapTrap::setHitPoints(int n)
{
	this->hitpoints = n;
}

void ClapTrap::setAttackDamage(int n)
{
	this->attackDamage = n;
}

void ClapTrap::setEnergyPoints(int n)
{
	this->energyPoints = n;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "ClapTrap Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.getName();
		this->hitpoints = rhs.getHitPoints();
		this->energyPoints = rhs.getEnergyPoints();
		this->attackDamage = rhs.getAttackDamage();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &i)
{
	o << BOLD_WHITE << "\"" << i.getName() << "\"" << WHITE << GREY << " [" << i.getHitPoints() << ":HP	" << i.getEnergyPoints() << ":EP	" << i.getAttackDamage() << ":AD]" << WHITE;
	return o;
}
