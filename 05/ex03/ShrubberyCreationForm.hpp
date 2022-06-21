#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;

public:
	class ImpossibleToCreateAFile: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	ShrubberyCreationForm(std::string const &target);	  //Canonical
	ShrubberyCreationForm(ShrubberyCreationForm const &src);			  //Canonical
	virtual ~ShrubberyCreationForm(void);					  //Canonical
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs); //Canonical
	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i);

#endif
