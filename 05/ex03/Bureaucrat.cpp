#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int i) : name(name), grade(i)
{
	// std::cout << GREY << "Bureaucrat default constructor called " << WHITE << std::endl;
	if (i < 1)
		throw GradeTooHighException();
	if (i > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.getName())
{
	// std::cout << GREY << "Bureaucrat copy constructor called " << WHITE << std::endl;
	*this = src;
}

Bureaucrat::~Bureaucrat(void)
{
	// std::cout << GREY << "Bureaucrat Destructor called " << WHITE << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	// std::cout << "Bureaucrat Assignation operator called." << std::endl;
	if (this != &rhs)
	{
		grade = rhs.getGrade();
	}
	return (*this);
}

std::string const Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade(void) const
{
	return (grade);
}

void Bureaucrat::increment_grade(void)
{
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrement_grade(void)
{
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}

void Bureaucrat::signForm(Form &form)
{
	if (!(form.getSigned()))
	{
		if (getGrade() <= form.getGradeSign())
		{
			std::cout << *this << GREEN << " signs " << WHITE << YELLOW << form.getName() << WHITE << " form." << std::endl;
			form.signForm();
		}
		else
			std::cout << *this << RED << " can not sign " << WHITE << YELLOW << form.getName() << WHITE << " form, because it is not enough grade." << std::endl;
	}
	else if (form.getSigned())
	{
		if (getGrade() <= form.getGradeSign())
		{
			
			std::cout << YELLOW << form.getName() << WHITE << " has been already " << GREEN << " signed.\n " << WHITE << BOLD << getName() << WHITE << RED << "! No more bureaucracy please!!!!" << WHITE << std::endl;
		}
		else
			std::cout << *this << RED << " can not sign " << WHITE << YELLOW << form.getName() << WHITE << " form, because it is not enough grade and it has been already" << GREEN << " signed.\n " << WHITE << BOLD << getName() << WHITE << RED << "! No more bureaucracy please!!!!" << WHITE << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	form.execute(*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << BOLD << i.getName() << WHITE << ", bureaucrat grade " << UNDERSCORE << i.getGrade() << WHITE;
	return (o);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	{
		return ("Well, there is no such grade.\nThe range is between 1 (the highest) and 150 (the lowest).");
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	{
		return ("Well, there is no such grade.\nThe range is between 1 (the highest) and 150 (the lowest).");
	}
}
