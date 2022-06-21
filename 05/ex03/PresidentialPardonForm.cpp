#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
	// // std::cout << GREY << "PresidentialPardonForm default constructor called " << WHITE << std::endl;
	std::cout << '\a';

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): Form(src.getName(), 25, 5), _target(src.getTarget())
{
	// std::cout << GREY << "PresidentialPardonForm copy constructor called " << WHITE << std::endl;
	*this = src;

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// std::cout << GREY << "PresidentialPardonForm Destructor called " << WHITE << std::endl;

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
	// std::cout << "PresidentialPardonForm assignation operator called from " << std::endl;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
	if (i.getSigned())
		o << YELLOW << i.getName() << WHITE << " is " << GREEN << "signed" << WHITE << ", with target " << UNDERSCORE << i.getTarget() << WHITE  ", with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	else
		o << YELLOW << i.getName() << " is " << RED <<  "not signed" << WHITE <<WHITE << ", with target " << UNDERSCORE << i.getTarget() << WHITE << ", with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	return (o);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if(getSigned())
	{
		if(executor.getGrade() <= getGradeExecute())
		{
			std::cout << YELLOW << _target << WHITE << UNDERSCORE << " has been pardoned by Zafod Beeblebrox." << WHITE << std::endl;
			std::cout << getName() << " has been " << GREEN << "executed" << WHITE << " by " << executor << std::endl;
		}
		else
			std::cout << executor << RED << " can not execute " << WHITE << YELLOW << getName() << WHITE << " form, because he has not enough grade." << std::endl;
	}
	else
	{
		if(executor.getGrade() <= getGradeExecute())
		{
			std::cout << executor << RED << " can not execute " << WHITE << YELLOW << getName() << WHITE << " form, because it has not been signed yet." << std::endl;
		}
		else
			std::cout << executor << RED << " can not execute " << WHITE << YELLOW << getName() << WHITE << " form, because he has not enough grade and form has not been signed yet." << std::endl;
	}
}
