#include "Contact.hpp"

std::string Contact::field_name[5] =
{
		"first name",
		"last name",
		"nickname",
		"phone number",
		"darkest secret"
};

Contact::Contact()
{
	for (int i = first_name; i <= darkest_secret; i++)
		this->info[i] = std::string();
}

Contact::~Contact()
{
}

bool	Contact::set_info(int index, int counter)
{
	this->index = index;
	this->counter = counter;
	for (int i = first_name; i <= darkest_secret; i++)
	{
		std::cout << "# " << Contact::field_name[i] << ": ";
		std::getline(std::cin, this->info[i]);
	}
	size_t total_length = 0;
	for (int i = first_name; i <= darkest_secret; i++)
		total_length += this->info[i].length();
	if (total_length == 0)
	{
		std::cout << "\033[31m# Empty contact was not added\033[0m" << std::endl;
		return (false);
	}
	std::cout << "\033[32m# Contact was added\033[0m" << std::endl;
	if (this->index == 1 && counter != 8)
		std::cout << "\033[2m# There is " << this->index << " contact.\033[0m" << std::endl;
	else if (this->index > 1 && counter != 8)
		std::cout << "\033[2m# There are " << this->index << " contacts.\033[0m" << std::endl;
	else if (counter >= 8)
		std::cout << "\033[2m# There are " << this->counter << " contacts.\033[0m" << std::endl;
	std::cout << "\033[2m# Now you can ADD more, SEARCH or EXIT.\033[0m" << std::endl;
	return (true);
}

void	Contact::display_info()
{
	std::cout << "|" << std::setw(10) << this->index;
	for (int i = first_name; i <= nickname; i++)
	{
		std::cout << "|";
		if (this->info[i].length() > 10)
			std::cout << this->info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|" << std::endl;
}

void	Contact::display_index(void)
{
	std::cout << "# Contact [" << this->index << "]" << std::endl;
	for (int i = first_name; i <= darkest_secret; i++)
	{
		std::cout << "# " << Contact::field_name[i] << ": ";
		std::cout << this->info[i] << std::endl;
	}
}
