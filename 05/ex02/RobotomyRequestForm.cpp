#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target): Form("RobotomyRequestForm", 72, 45), target(target)
{
	// // std::cout << GREY << "RobotomyRequestForm default constructor called " << WHITE << std::endl;
	std::cout << '\a';
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): Form(src.getName(), 72, 45), target(src.getTarget())
{
	// std::cout << GREY << "RobotomyRequestForm copy constructor called " << WHITE << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// std::cout << GREY << "RobotomyRequestForm Destructor called " << WHITE << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
	// std::cout << "RobotomyRequestForm assignation operator called from " << std::endl;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return target;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
	if (i.getSigned())
		o << YELLOW << i.getName() << WHITE << " is " << GREEN << "signed" << WHITE << ", with target " << UNDERSCORE << i.getTarget() << WHITE  ", with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	else
		o << YELLOW << i.getName() << " is " << RED <<  "not signed" << WHITE <<WHITE << ", with target " << UNDERSCORE << i.getTarget() << WHITE << ", with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	return (o);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getSigned())
	{
		if(executor.getGrade() <= getGradeExecute())
		{
			std::cout << UNDERSCORE << "drilling noises....." <<  WHITE << std::endl;

			srand(time(0));
			int rand = std::rand();

			if (rand % 2)
				std::cout << YELLOW << target << WHITE << UNDERSCORE << " has been robotomized successfully 50% of the time." << WHITE << std::endl;
			else
			std::cout << YELLOW << target << WHITE << UNDERSCORE << " has been robotomized unsuccessfully 50% of the time." << WHITE << std::endl;

			std::cout << getName() << " has been " << GREEN << "executed" << WHITE << " by " << executor << std::endl;
		}
		else
			std::cout << executor << RED << " cannot execute " << WHITE << YELLOW << getName() << WHITE << " form, because his/her grade is not suffcient." << std::endl;
	}
	else
	{
		if (executor.getGrade() <= getGradeExecute())
		{
			std::cout << executor << RED << " cannot execute " << WHITE << YELLOW << getName() << WHITE << " form, because it has not been signed yet." << std::endl;
		}
		else
			std::cout << executor << RED << " cannot execute " << WHITE << YELLOW << getName() << WHITE << " form, because his/her grade is not suffcient and form has not been signed yet." << std::endl;
	}
}
