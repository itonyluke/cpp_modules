#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	std::cout << GREY << START_END << WHITE << std::endl;
	try
	{
		Form m("m", 50, 50);
		std::cout << m;
		ShrubberyCreationForm tree("tree");
		std::cout << tree ;
		RobotomyRequestForm robotomy("robotomy");
		std::cout << robotomy;
		PresidentialPardonForm president("president");
		std::cout << president;


		Bureaucrat Joseph("Joseph", 30);
		std::cout << Joseph << std::endl;
		Bureaucrat Barbara("Barbara", 130);
		std::cout << Barbara << std::endl;
		Bureaucrat Steve("Steve", 20);
		std::cout << Steve << std::endl;
		Bureaucrat Susan("Susan", 75);
		std::cout << Susan << std::endl;
		Bureaucrat Peter("Peter", 30);
		std::cout << Peter << std::endl;
		Bureaucrat Jessica("Jessica", 150);
		std::cout << Jessica << std::endl;
		Bureaucrat Johnson("Johnson", 1);
		std::cout << Johnson << std::endl;

		std::cout << GREY << START_END << WHITE << std::endl;
		std::cout << m;
		Barbara.signForm(m);
		Joseph.signForm(m);
		std::cout << m;
		Steve.signForm(m);
		Susan.executeForm(m);
		Joseph.executeForm(m);
		std::cout << GREY << START_END << WHITE << std::endl;
		std::cout << tree;
		Jessica.signForm(tree);//
		Jessica.executeForm(tree);//
		Peter.signForm(tree);//
		Peter.executeForm(tree);//
		std::cout << tree;
		std::cout << GREY << START_END << WHITE << std::endl;
		std::cout << robotomy;
		Jessica.executeForm(robotomy);
		Barbara.signForm(robotomy);
		Steve.signForm(robotomy);
		Jessica.executeForm(robotomy);
		Peter.executeForm(robotomy);
		std::cout << robotomy;
		std::cout << GREY << START_END << WHITE << std::endl;
		std::cout << president;
		Susan.signForm(president);
		Johnson.signForm(president);
		std::cout << president;
		Susan.executeForm(president);
		Johnson.executeForm(president);
		std::cout << president;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << GREY << START_END << WHITE << std::endl;
	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}
