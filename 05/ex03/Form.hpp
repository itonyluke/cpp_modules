#ifndef FORM_HPP
# define FORM_HPP

# define WHITE "\033[0m"
# define GREY "\033[2m"
# define ITALIC "\033[3m"
# define UNDERSCORE "\033[4m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define BOLD "\033[97m"
# define START_END "*****************************************************************************************************************************"

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat;

class Form
{
private:
	std::string const name;
	int const grade_sign;
	int const grade_execute;
	bool whetherItIsSigned;

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

	Form(std::string const &name, int s, int e);	  //Canonical
	Form(Form const &src);			  //Canonical1
	virtual ~Form(void);					  //Canonical
	Form &operator=(Form const &rhs); //Canonical
	std::string const getName() const;
	int getGradeSign() const;
	int getGradeExecute() const;
	bool getSigned() const;
	void signForm(); 
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif
