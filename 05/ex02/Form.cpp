#include "Form.hpp"
#include "Bureaucrat.hpp"

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
}

Form::~Form(void)
{
	// std::cout << GREY << "Form Destructor called " << WHITE << std::endl;
}

std::string const Form::getName() const
{
	return (name);
}

Form &Form::operator=(Form const &)
{
	// std::cout << "Form assignation operator called from " << std::endl;
	return (*this);
}

int Form::getGradeSign(void) const
{
	return grade_sign;
}

int Form::getGradeExecute(void) const
{
	return grade_execute;
}


bool Form::getSigned(void) const
{
	return whetherItIsSigned;
}

void Form::signForm(void)
{
	this->whetherItIsSigned = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (getSigned())
	{
		if (executor.getGrade() <= getGradeExecute())
		{
			std::cout << YELLOW << getName() << WHITE << " has been " << GREEN << "executed" << WHITE << " by " << executor << std::endl;
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

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	if (i.getSigned())
		o << YELLOW << i.getName() << WHITE << ", Form is " << GREEN << "signed" << WHITE << " with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	else
		o << YELLOW << i.getName() << WHITE << ", Form is " << RED <<  "not signed" << WHITE << " with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	return (o);
}


