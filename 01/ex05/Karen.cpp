#include "Karen.hpp"

Karen::Karen(void)
{
	methods[0] = &Karen::debug;
	methods[1] = &Karen::info;
	methods[2] = &Karen::warning;
	methods[3] = &Karen::error;
}

Karen::~Karen(void)
{
}

void Karen::debug( void )
{
	std::string complain("\033[36m\"DEBUG\" level: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\033[0m");
	std::cout << complain << std::endl;
}

void Karen::info( void )
{
	std::string complain("\033[34m\"INFO\" level: I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!\033[0m");
	std::cout << complain << std::endl;
}
void Karen::warning( void )
{
	std::string complain("\033[33m\"WARNING\" level: I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\033[0m");
	std::cout << complain << std::endl;
}

void Karen::error( void )
{
	std::string complain("\033[31m\"ERROR\" level: This is unacceptable, I want to speak to the manager now.\033[0m");
	std::cout << complain << std::endl;
}

void Karen::complain( std::string level )
{
	std::string command[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (unsigned int i = 0; i < 4; ++i)
	{
		if (command[i] == level)
		{
			(this->*methods[i])();
			return ;
		}
	}
}
