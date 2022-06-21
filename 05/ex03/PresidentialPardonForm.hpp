#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm(std::string const &target);	  //Canonical
	PresidentialPardonForm(PresidentialPardonForm const &src);			  //Canonical
	virtual ~PresidentialPardonForm(void);					  //Canonical
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs); //Canonical
	std::string getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i);

#endif
