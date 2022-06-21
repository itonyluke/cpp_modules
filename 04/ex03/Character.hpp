#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# define WHITE "\033[0m"
# define GREY "\033[2m"
# define ITALIC "\033[3m"
# define UNDERSCORE "\033[4m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define MAGENTA "\033[35m"
# define BOLD "\033[97m"

# include <iostream>
# include <string>

# include "ICharacter.hpp"

class AMateria;

class Character: public ICharacter
{
private:
	std::string		name;
	AMateria	*array[4];
public:
	Character(std::string const &name);//Canonical
	Character(Character const &src); //Canonical
	virtual ~Character(); //Canonical
	Character &operator=(Character const &rhs); //Canonical

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
