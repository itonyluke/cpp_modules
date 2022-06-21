#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define BOLD_WHITE "\033[97m"
# define WHITE "\033[0m"
# define GREY "\033[2m"
# define START_END "*****************************************************************************************************************************"

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string		name;
	int				hitpoints;	   //points
	int				energyPoints; //energy level points
	int				attackDamage; //damage points
public:
	ClapTrap(void); //Canonical default
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src); //Canonical copy
	~ClapTrap(void);			   //Canonical default

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName(void) const;
	int getHitPoints(void) const;
	int getEnergyPoints(void) const;
	int getAttackDamage(void) const;

	void setName(std::string name);
	void setHitPoints(int n);
	void setEnergyPoints(int n);
	void setAttackDamage(int n);

	ClapTrap &operator=(const ClapTrap &rhs); //Canonical assignation operator overload

};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif
