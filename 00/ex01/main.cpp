#include "PhoneBook.hpp"

int main(void)
{
	Phonebook pb;
	bool run;
	std::string command;

	std::cout << "\033[90m****************************************************\033[0m" << std::endl;
	pb.show_prompt();
	run = true;
	while (run)
	{
		std::cout << "> ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << "end-of-file condition has occurred." << std::endl;
			std::cout << "# Program quit and the contacts (if any) are lost forever." << std::endl;
			break ;
		}
		if (command == "ADD")
			pb.add_contact();
		else if (command == "SEARCH")
			pb.search_contact();
		else if (command == "EXIT")
		{
			std::cout << "# Program quit and the contacts (if any) are lost forever." << std::endl;
			run = false;
		}
		else
		{
			std::cout << "\033[2m# The input is discarded." << std::endl;
			std::cout << "# Use one of the following commands: ADD, SEARCH or EXIT.\033[0m" << std::endl;
		}
	}
	std::cout << "\033[90m****************************************************\033[0m" << std::endl;
	return (0);
}
