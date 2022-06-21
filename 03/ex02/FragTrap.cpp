#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	hitpoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << UNDERSCORE << "FragTrap default constructor called " << WHITE << std::endl;
}

FragTrap::FragTrap(int n)
{
	if (n == 1)
	{
		hitpoints = 100;
		attackDamage = 30;
	}
	std::cout << UNDERSCORE << "FragTrap default constructor called " << WHITE << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	hitpoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << UNDERSCORE << "FragTrap parametric constructor called " << WHITE << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << GREY << "Copy constructor called " << WHITE << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << UNDERSCORE << "FragTrap destructor called " << WHITE << std::endl;
}

// void FragTrap::attack(std::string const &target)
// {
// 	std::cout << "Be aware!!! FragTrap " << RED << *this;
// 	int ad = ClapTrap::getAttackDamage();
// 	ad++;
// 	ClapTrap::setAttackDamage(ad);//attackDamage++;
// 	std::cout << WHITE << " attacks " << MAGENTA << target << WHITE << ", causing " << MAGENTA << "1" << WHITE << " points of damage!" << std::endl;
// 	//Атакует цель нанося 1 единицу поражения.
// }

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "FragTrap " << *this;
// 	// std::cout << "hit points" << attackDamage;
// 	int m = gethitpoints();
// 	m = m - amount;
// 	if (m >= 0)
// 	{
// 		sethitpoints(m);
// 		std::cout << " takes damage and lost " << MAGENTA << amount << WHITE << " hit points!" << std::endl;
// 		//Получает урон в Y очков.
// 		std::cout << "FragTrap " << *this << " now has " << MAGENTA << gethitpoints() << WHITE << " hit points!" << std::endl;
// 	}
// 	else
// 		std::cout << " can't takes damage of " << MAGENTA << amount << WHITE << " hit points, because he has just " << MAGENTA << gethitpoints() << WHITE << std::endl;
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	std::cout << "FragTrap " << *this;
// 	int m;
// 	m = getenergyPoints();
// 	m = m + amount;
// 	setenergyPoints(m);
// 	std::cout << " is repaired " << " and got " << MAGENTA << amount << WHITE << " points of enegry!" << std::endl;
// 	//Отремонтирован
// 	std::cout << "FragTrap " << *this << " now has " << MAGENTA << getenergyPoints() << WHITE << " energy points!" << std::endl;
// }

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << *this << " is asking: \"High Five, Guys!\""<< std::endl;
	//дай пять
}
