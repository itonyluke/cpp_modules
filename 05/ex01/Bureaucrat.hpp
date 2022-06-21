#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

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

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
private:
	std::string const name;
	int grade;
public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	Bureaucrat(std::string const &name, int i);	  //Canonical
	Bureaucrat(Bureaucrat const &src);			  //Canonical
	virtual ~Bureaucrat(void);					  //Canonical
	Bureaucrat &operator=(Bureaucrat const &rhs); //Canonical
	std::string const getName() const;
	int getGrade() const;
	void increment_grade();
	void decrement_grade();
	void signForm(Form &form);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif
