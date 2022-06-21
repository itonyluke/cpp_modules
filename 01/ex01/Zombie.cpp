#include "Zombie.hpp"

Zombie::Zombie(void)
{
}
Zombie::~Zombie()
{
	std::cout << "<" << this->name << ">" << " \033[31md\033[35mi\033[91me\033[95md\033[0m" << std::endl;
	return ;
}

void Zombie::announce(std::string name)
{
	this->name = name;
	std::cout << "<" << this->name << ">" << " Bra\033[32miiiiiii\033[42mnnn\033[92mzzzZ\033[102m...\033[0m" << std::endl;
	return ;
}
