#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# define WHITE "\033[0m"
# define GREY "\033[2m"
# define ITALIC "\033[3m"
# define UNDERSCORE "\033[4m"
# define RED "\033[31m"
# define BOLD "\033[97m"

# include <iostream>
# include <string>

class WrongAnimal
{
protected:
	std::string type;
	std::string sound;
public:
	WrongAnimal(void); //Canonical
	WrongAnimal(WrongAnimal const &src); //Canonical
	virtual ~WrongAnimal(void);//Canonical

	void makeSound() const;
	std::string getType(void) const;

	WrongAnimal &operator=(WrongAnimal const &rhs); //Canonical
};

std::ostream &operator<<(std::ostream &o, WrongAnimal const &i);

#endif
