#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form
{
private:
	std::string _target;

public:
	class ImpossibleToCreateAFile: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	RobotomyRequestForm(std::string const &target);	  //Canonical
	RobotomyRequestForm(RobotomyRequestForm const &src);			  //Canonical
	virtual ~RobotomyRequestForm(void);					  //Canonical
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs); //Canonical
	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;

};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i);

#endif
