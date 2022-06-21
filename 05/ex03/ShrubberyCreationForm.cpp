#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	// // std::cout << GREY << "ShrubberyCreationForm default constructor called " << WHITE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): Form(src.getName(), 145, 137), _target(src.getTarget())
{
	// std::cout << GREY << "ShrubberyCreationForm copy constructor called " << WHITE << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// std::cout << GREY << "ShrubberyCreationForm Destructor called " << WHITE << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
	// std::cout << "ShrubberyCreationForm assignation operator called from " << std::endl;
	return (*this);
}


std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
	if (i.getSigned())
		o << YELLOW << i.getName() << WHITE << " is " << GREEN << "signed" << WHITE << ", with target " << UNDERSCORE << i.getTarget() << WHITE  ", with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	else
		o << YELLOW << i.getName() << " is " << RED <<  "not signed" << WHITE <<WHITE << ", with target " << UNDERSCORE << i.getTarget() << WHITE << ", with grade to sign " << UNDERSCORE << i.getGradeSign() << WHITE << " and grade to execute " << UNDERSCORE << i.getGradeExecute() << WHITE << std::endl;
	return (o);
}

const char *ShrubberyCreationForm::ImpossibleToCreateAFile::what() const throw()
{
	{
		return ("Sorry, but it impossible to create a file!");
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(getSigned())
	{
		if(executor.getGrade() <= getGradeExecute())
		{
			std::string new_name = _target + "_shrubbery";
			std::ofstream ofs(new_name);
			if (!ofs)
				std::cout << "it is wrong" << std::endl;//throw();

			ofs << "          *" << std::endl;
			ofs << "        /|\\" << std::endl;
			ofs << "       /*|O\\" << std::endl;
			ofs << "      /*/|\\*\\" << std::endl;
			ofs << "     /X/O|*\\X\\" << std::endl;
			ofs << "    /*/X/|\\X\\*\\" << std::endl;
			ofs << "   /O/*/X|*\\O\\X\\" << std::endl;
			ofs << "  /*/O/X/|\\X\\O\\*\\" << std::endl;
			ofs << " /X/O/*/X|O\\X\\*\\O\\" << std::endl;
			ofs << "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl;
			ofs << "        |X|" << std::endl;
			ofs << "        |X|" << std::endl;
			ofs.close();
			std::cout << YELLOW << _target << WHITE << " has been " << GREEN << "executed" << WHITE << " by " << executor << std::endl;
		}
		else
			std::cout << executor << RED << " cannot execute " << WHITE << YELLOW << getName() << WHITE << " form, because he has not enough grade." << std::endl;
	}
	else
	{
		if(executor.getGrade() <= getGradeExecute())
		{
			std::cout << executor << RED << " cannot execute " << WHITE << YELLOW << getName() << WHITE << " form, because it has not been signed yet." << std::endl;
		}
		else
			std::cout << executor << RED << " cannot execute " << WHITE << YELLOW << getName() << WHITE << " form, because he has not enough grade and form has not been signed yet." << std::endl;
	}
}
