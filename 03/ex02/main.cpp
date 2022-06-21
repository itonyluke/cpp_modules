#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	FragTrap g;
	std::cout << g << std::endl;
	g.attack("Linda");
	g.takeDamage(5);
	g.beRepaired(5);
	g.highFivesGuys();
	FragTrap h("X-STLK-23-2");
	std::cout << h << std::endl;
	h.attack("Connor");
	h.takeDamage(5);
	h.beRepaired(5);
	h.setName("FragTrap");
	h.highFivesGuys();
	FragTrap i(h);
	std::cout << i << std::endl;
	i.setName("FL4K");
	i.attack("Connor");
	i.takeDamage(15);
	i.beRepaired(45);
	i.highFivesGuys();

	FragTrap *z = new FragTrap("BNK3R");
	z->attack("Connor");
	z->takeDamage(15);
	z->beRepaired(45);
	z->highFivesGuys();
	delete z;
}
