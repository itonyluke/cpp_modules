#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << ITALIC << "ScavTrap default constructor called " << WHITE << std::endl;
	return;
}

ScavTrap::ScavTrap(int n)
{
	if (n == 1)
		energyPoints = 50;
	std::cout << ITALIC << "ScavTrap default constructor for child called " << WHITE << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << ITALIC << "ScavTrap Parametric constructor called " << WHITE << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << ITALIC << "ScavTrap Copy constructor called " << WHITE << std::endl;
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << ITALIC << "ScavTrap destructor called " << WHITE << std::endl;
	return;
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "Be aware!!! ScavTrap " << BOLD_WHITE << *this;
	attackDamage++;
	std::cout << WHITE << " attacks " << BOLD_WHITE << target << WHITE << ", causing " << BOLD_WHITE << "1" << WHITE << " points of damage!" << std::endl;
	//Атакует цель нанося 1 единицу поражения.
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << *this;
	int m;
	m = hitpoints - amount;
	if (m >= 0)
	{
		setHitPoints(m);
		std::cout << " takes damage and lost " << BOLD_WHITE << amount << WHITE << " hit points!" << std::endl;
		//Получает урон в Y очков.
		std::cout << "ScavTrap " << *this << " now has " << BOLD_WHITE << hitpoints << WHITE << " hit points!" << std::endl;
	}
	else
		std::cout << " can't take damage of " << BOLD_WHITE << amount << WHITE << " hit points, because he has just " << BOLD_WHITE << hitpoints << WHITE << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << *this;
	energyPoints += amount;
	std::cout << " is repaired" << " and got " << BOLD_WHITE << amount << WHITE << " points of enegry!" << std::endl;
	//Отремонтирован
	std::cout << "ScavTrap " << *this << " now has " << BOLD_WHITE << energyPoints << WHITE << " energy points!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << *this << " has entered in Gate keeper mode."<< std::endl;
	//вошeл в режим привратника.
}
