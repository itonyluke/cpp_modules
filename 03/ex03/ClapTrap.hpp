#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define ITALIC "\033[3m"
# define UNDERSCORE "\033[4m"
# define BOLD_WHITE "\033[97m"
# define GREY "\033[2m"
# define FGGREY "\033[100m"
# define WHITE "\033[0m"
# define BGBLUE "\033[44m"
# define START_END "*****************************************************************************************************************************"

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string		name;
	int				hitpoints;	   //hitpoints
	int				energyPoints; //energy level points
	int				attackDamage; //damage points
public:
	ClapTrap(void); //Canonical
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src); //Canonical
	virtual ~ClapTrap(void);			   //Canonical

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

	ClapTrap &operator=(ClapTrap const &rhs); //Canonical

};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif
