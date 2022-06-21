#ifndef AMATERIA_HPP
# define AMATERIA_HPP

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

class ICharacter;

class AMateria
{
protected:
	std::string type;
public:
	AMateria(std::string const &type);//Canonical
	AMateria(AMateria const &src); //Canonical
	virtual ~AMateria(void);	   //Canonical
	AMateria &operator=(AMateria const &rhs); //Canonical
	std::string const &getType() const; //Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
