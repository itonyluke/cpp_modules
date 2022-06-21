#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define WHITE "\033[0m"
# define GREY "\033[2m"
# define ITALIC "\033[3m"
# define UNDERSCORE "\033[4m"
# define GREEN "\033[32m"
# define BOLD "\033[97m"

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal(void); //Canonical
	Animal(Animal const &src); //Canonical
	virtual ~Animal(void);//Canonical

	virtual void makeSound() const;
	std::string getType(void) const;

	Animal &operator=(Animal const &rhs); //Canonical
};

std::ostream &operator<<(std::ostream &o, Animal const &i);

#endif
