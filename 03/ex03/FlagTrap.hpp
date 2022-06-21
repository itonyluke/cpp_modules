#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
public:
	FlagTrap(void); //Canonical
	FlagTrap(std::string name);
	FlagTrap(FlagTrap const &src); //Canonical
	~FlagTrap(void);			   //Canonical
	void highFivesGuys(void);
};

#endif