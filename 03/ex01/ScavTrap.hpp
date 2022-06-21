#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
public:
	ScavTrap(void); //Canonical
	ScavTrap(int n); //created in a derived class ScavTrap
	ScavTrap(std::string name);
	ScavTrap(std::string name, int n); //created in a derived class ScavTrap
	ScavTrap(ScavTrap const &src); //Canonical
	virtual ~ScavTrap(void);			   //Canonical
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate();
};

#endif

