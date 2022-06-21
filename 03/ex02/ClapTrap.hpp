#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define UNDERSCORE "\033[4m"
# define BOLD_WHITE "\033[97m"
# define WHITE "\033[0m"
# define GREY "\033[2m"
# define FGGREY "\033[100m"
# define START_END "*****************************************************************************************************************************"

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string		name;
	int				hitpoints;	   //points
	int				energyPoints; //energy level points
	int				attackDamage; //damage points
public:
	ClapTrap(void); //Canonical default contructor
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src); //Canonical copy constructor
	virtual ~ClapTrap(void);			   //Canonical destructor

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	int gethitpoints(void) const;
	int getenergyPoints(void) const;
	int getAttackDamage(void) const;

	void setName(std::string name);
	void sethitpoints(int n);
	void setenergyPoints(int n);
	void setAttackDamage(int n);

	ClapTrap &operator=(ClapTrap const &rhs); //Canonical assignation operator overload
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif
