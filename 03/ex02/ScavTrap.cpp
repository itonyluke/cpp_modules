#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << FGGREY << "ScavTrap default constructor called " << WHITE << std::endl;
}

ScavTrap::ScavTrap(int n)
{
	if (n == 1)
	{
		energyPoints = 50;
	}
	std::cout << FGGREY << "ScavTrap default constructor for child called " << WHITE << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	hitpoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << FGGREY << "ScavTrap Parametric constructor called " << WHITE << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << FGGREY << "ScavTrap Copy constructor called " << WHITE << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << FGGREY << "ScavTrap destructor called " << WHITE << std::endl;
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
		sethitpoints(m);
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
	std::cout << "ScavTrap " << *this << " has enterred in Gate keeper mode."<< std::endl;
	//вошeл в режим привратника.
}
