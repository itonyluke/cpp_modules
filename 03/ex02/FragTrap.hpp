#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class FragTrap: public virtual ClapTrap
{
public:
	FragTrap(void); //Canonical
	FragTrap(int n); //for child
	FragTrap(std::string name);
	FragTrap(std::string name, int n);//for child
	FragTrap(FragTrap const &src); //Canonical
	virtual ~FragTrap(void);			   //Canonical
	void highFivesGuys(void);
	// void attack(std::string const &target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);
};

#endif
