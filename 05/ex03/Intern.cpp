#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
	method[0] = &Intern::makeSrubberyCreationForm;
	method[1] = &Intern::makeRobotomyRequestForm;
	method[2] = &Intern::makePresidentialPardonForm;
	// std::cout << GREY << "Intern default constructor called " << WHITE << std::endl;
}

Intern::Intern(Intern const &src)
{
	// std::cout << GREY << "Intern copy constructor called " << WHITE << std::endl;
	*this = src;
}

Intern::~Intern(void)
{
	// std::cout << GREY << "Intern Destructor called " << WHITE << std::endl;
}

Intern &Intern::operator=(Intern const &)
{
	// std::cout << "Intern Assignation operator called." << std::endl;
	return (*this);
}

Form *Intern::makeSrubberyCreationForm(std::string target)
{
	Form *m = new ShrubberyCreationForm(target);
	std::cout << BOLD << "Intern" << WHITE << GREEN << " creates " << WHITE << "shrubbery creation form" << std::endl;
	return m;
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
	Form *m  = new RobotomyRequestForm(target);
	std::cout << BOLD << "Intern" << WHITE << GREEN << " creates " << WHITE << "robotomy request form" << std::endl;
	return m;

}
Form *Intern::makePresidentialPardonForm(std::string target)
{
	Form *m = new PresidentialPardonForm(target);
	std::cout << BOLD << "Intern" << WHITE << GREEN << " creates " << WHITE << "presidential pardon form" << std::endl;
	return m;
}

Form *Intern::makeForm(std::string type, std::string target)
{
	Form *m = NULL;

	std::string command[] = {
	"robotomy request",
	"shrubbery creation",
	"presidential pardon"
	};

	for (int i = 0; i < 4; ++i)
	{
		if (command[i].compare(type) == 0)
		{
			return ((this->*method[i])(target));
		}
	}
	std::cout << BOLD << "Intern" << WHITE << RED <<" can not creates" << WHITE << " this form, because it is not in a base." << std::endl;
	return m;

}

// std::ostream &operator<<(std::ostream &o, Intern const &i)
// {
// 	o << BOLD << "Intern" << WHITE;
// 	return (o);
// }

