#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void); //Canonical
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src); //Canonical
	virtual ~DiamondTrap(void);					 //Canonical
	void attack(std::string const &target);
	void whoAmI();
	virtual std::string getName(void) const;

private:
	std::string name;
};

std::ostream &operator<<(std::ostream &o, DiamondTrap const &i);

#endif
