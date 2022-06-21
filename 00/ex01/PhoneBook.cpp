#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
	this->amount = 0;
	this->old_amount = 0;
	this->counter = 0;
}

Phonebook::~Phonebook()
{
}

void Phonebook::show_prompt(void)
{
	std::cout << "# Here is a PhoneBook program." << std::endl;
	std::cout << "# Use one of the following commands: ADD, SEARCH or EXIT." << std::endl;
}

void Phonebook::add_contact(void)
{
	if (this->amount == 8)
	{
		std::cout << "\033[33m# The phonebook is full." << std::endl;
		std::cout << "# Now you will replace the oldest contact.\033[0m" << std::endl;
		this->amount = 0;
		if (this->contacts[this->amount].set_info(this->amount + 1, this->counter))
			this->amount++;
	}
	else if (this->contacts[this->amount].set_info(this->amount + 1, this->counter))
	{
		this->amount++;
		this->old_amount++;
		if (this->counter != 8)
			this->counter++;
	}
}

void Phonebook::show_search_header_and_display_info(void)
{
	std::cout << "\033[90m|-------------------------------------------|\033[0m" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "\033[90m|-------------------------------------------|\033[0m" << std::endl;
	for (int i = 0; i < this->counter; i++)
		this->contacts[i].display_info();
	if (this->counter == 0)
		this->contacts[1].display_info();
	std::cout << "\033[90m|-------------------------------------------|\033[0m" << std::endl;
}

void Phonebook::search_contact(void)
{
	int index;

	if (this->amount == 0)
		std::cout << "\033[31m# ADD a contact before searching\033[0m" << std::endl;
	else if (this->amount <= 8 && this->old_amount != 8)
	{
		this->show_search_header_and_display_info();
		std::cout << "# Enter an index to display the information about a particular contact\n# or 0 to exit search" << std::endl;
		std::cout << "> ";
		while (!(std::cin >> index) || (index < 0 || index > this->amount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[91m# Invalid index\033[0m" << std::endl;
			std::cout << "> ";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].display_index();
	}
	else
	{
		this->show_search_header_and_display_info();
		std::cout << "# Enter an index to display the information about a particular contact\n# or 0 to exit search" << std::endl;
		std::cout << "> ";
		while (!(std::cin >> index) || (index < 0 || index > this->old_amount))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\033[91m# Invalid index\033[0m" << std::endl;
			std::cout << "> ";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].display_index();
	}
}
