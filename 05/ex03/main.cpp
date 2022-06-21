#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << GREY << START_END << WHITE << std::endl;
	try
	{
		Bureaucrat Richard("Richard", 1);
		Intern someRandomIntern;
//		 Form* rrf;
//		 rrf = someRandomIntern.makeForm("robotomy request", "Bender");
//		 std::cout << *rrf;
//		 Form* scf;
//		 scf = someRandomIntern.makeForm("shrubbery creation", "Bender2");
//		 std::cout << *scf;
		Form* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "Bender3");
		std::cout << *ppf;
		Richard.signForm(*ppf);
		Richard.executeForm(*ppf);
		// Form* ncf;
		// ncf = someRandomIntern.makeForm("new crazy form", "Bender");
		// std::cout << ncf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << GREY << START_END << WHITE << std::endl;
	return (0);
}

