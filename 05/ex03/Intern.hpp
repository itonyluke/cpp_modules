#ifndef INTERN_HPP
# define INTERN_HPP

# define WHITE "\033[0m"
# define GREY "\033[2m"
# define ITALIC "\033[3m"
# define UNDERSCORE "\033[4m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[1;34m"
# define MAGENTA "\033[35m"
# define BOLD "\033[97m"
# define START_END "*****************************************************************************************************************************"

# include <iostream>
# include <string>
# include <exception>

class Form;

class Intern
{
private:
	typedef Form *(Intern::*func)(std::string target);
	func method[3];
	Form *makeSrubberyCreationForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makePresidentialPardonForm(std::string target);

public:

	Intern(void);	  //Canonical
	Intern(Intern const &src);			  //Canonical
	virtual ~Intern(void);					  //Canonical
	Intern &operator=(Intern const &rhs); //Canonical

	Form * makeForm(std::string type, std::string target);
};

#endif
