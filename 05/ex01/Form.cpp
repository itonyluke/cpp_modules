#include <string>
#include <iostream>
#include "Form.hpp"

Form::Form(std::string const &name, int s, int e): name(name), grade_sign(s), grade_execute(e), whetherItIsSigned(false)
{
	// std::cout << GREY << "Form default constructor called " << WHITE << std::endl;
	if (s < 1 || e < 1)
		throw GradeTooHighException();
	if (s > 150 || e > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &src): name(src.getName()), grade_sign(src.getGradeSign()), grade_execute(src.getGradeExecute()), whetherItIsSigned(false)
{
	// std::cout << GREY << "Form copy constructor called " << WHITE << std::endl;
	whetherItIsSigned = false;
	*this = src;
}

Form::~Form(void)
{
	// std::cout << GREY << "Form Destructor called " << WHITE << std::endl;
}

Form &Form::operator=(Form const &)
{
	// std::cout << "Form assignation operator called from " << std::endl;
	return (*this);
}

std::string const Form::getName() const
{
	return (name);
}

int Form::getGradeSign(void) const
{
	return (grade_sign);
}

int Form::getGradeExecute(void) const
{
	return (grade_execute);
}


bool Form::getSigned(void) const
{
	return (whetherItIsSigned);
}

void Form::signForm(void)
{
	this->whetherItIsSigned = true;

}


std::ostream &operator<<(std::ostream &o, Form const &i)
{
	if (i.getSigned())
		o << YELLOW << i.getName() << WHITE << ", Form is " << GREEN << "signed" << WHITE << " with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	else
		o << YELLOW << i.getName() << WHITE << ", Form is " << RED <<  "not signed" << WHITE << " with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	return (o);
}

const char *Form::GradeTooHighException::what() const throw()
{
	{
		return ("Well, there is no such grade.\nThe range is between 1 (the highest) and 150 (the lowest).");
	}
}

const char *Form::GradeTooLowException::what() const throw()
{
	{
		return ("Well, there is no such grade.\nThe range is between 1 (the highest) and 150 (the lowest).");
	}
}
