#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << UNDERSCORE << "FragTrap default constructor called " << WHITE << std::endl;
	return;
}

FragTrap::FragTrap(int n)
{
	if (n == 1)
	{
		this->setHitPoints(100);
		this->setAttackDamage(30);
	}
	std::cout << UNDERSCORE << "FragTrap default constructor called " << WHITE << std::endl;
	return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << UNDERSCORE << "Parametric constructor called " << WHITE << std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << UNDERSCORE << "Copy constructor called " << WHITE << std::endl;
	*this = src;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << UNDERSCORE << "FragTrap destructor called " << WHITE << std::endl;
	return;
}

// void FragTrap::attack(std::string const &target)
// {
// 	std::cout << "Be aware!!! FragTrap " << BOLD_WHITE << *this;
// 	int ad = ClapTrap::getAttackDamage();
// 	ad++;
// 	ClapTrap::setAttackDamage(ad);//attackDamage++;
// 	std::cout << WHITE << " attacks " << BOLD_WHITE << target << WHITE << ", causing " << BOLD_WHITE << "1" << WHITE << " points of damage!" << std::endl;
// 	//Атакует цель нанося 1 единицу поражения.
// }

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "FragTrap " << *this;
// 	// std::cout << "hit points" << attackDamage;
// 	int m = getHitPoints();
// 	m = m - amount;
// 	if (m >= 0)
// 	{
// 		setHitPoints(m);
// 		std::cout << " takes damage and lost " << BOLD_WHITE << amount << WHITE << " hit points!" << std::endl;
// 		//Получает урон в Y очков.
// 		std::cout << "FragTrap " << *this << " now has " << BOLD_WHITE << getHitPoints() << WHITE << " hit points!" << std::endl;
// 	}
// 	else
// 		std::cout << " can't take damage of " << BOLD_WHITE << amount << WHITE << " hit points, because he has just " << BOLD_WHITE << getHitPoints() << WHITE << std::endl;
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	std::cout << "FragTrap " << *this;
// 	int m;
// 	m = getEnergyPoints();
// 	m = m + amount;
// 	setEnergyPoints(m);
// 	std::cout << " is repaired" << " and got " << BOLD_WHITE << amount << WHITE << " points of enegry!" << std::endl;
// 	//Отремонтирован
// 	std::cout << "FragTrap " << *this << " now has " << BOLD_WHITE << getEnergyPoints() << WHITE << " energy points!" << std::endl;
// }

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << *this << " is asking: \"High Five, Guys!\""<< std::endl;
	//дай пять
}
