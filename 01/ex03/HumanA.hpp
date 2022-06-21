#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string		name;
	class Weapon*	weapon_a;
public:
	HumanA(std::string name, class Weapon & name_w);
	~HumanA(void);
	void 			attack();
};

#endif
