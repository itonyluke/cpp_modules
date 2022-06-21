#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

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

const std::string Bureaucrat::getName() const
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

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << std::endl;
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
