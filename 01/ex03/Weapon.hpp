#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string			type;
public:
	Weapon( std::string name_of_type );
	~Weapon( void );
	void				setType(std::string name_of_type);
	std::string const &	getType();
};

#endif
