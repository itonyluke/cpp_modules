#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];
	int		amount;
	int		old_amount;
	int		counter;
public:
	Phonebook();
	~Phonebook();

	void	show_prompt(void);
	void	add_contact(void);
	void	search_contact(void);
	void	show_search_header_and_display_info(void);
};

#endif
