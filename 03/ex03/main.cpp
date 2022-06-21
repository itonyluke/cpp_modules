#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	DiamondTrap g;
	std::cout << g << std::endl;
	g.takeDamage(5);
	g.attack("Connor");
	g.beRepaired(5);
	g.highFivesGuys();
	g.whoAmI();

	DiamondTrap l("Black");
	std::cout << l << std::endl;
	l.attack("Connor");
	l.takeDamage(5);
	l.beRepaired(5);
	l.highFivesGuys();
	l.whoAmI();

	DiamondTrap m(l);
	std::cout << m << std::endl;
	m.attack("Connor");
	m.takeDamage(15);
	m.beRepaired(45);
	m.highFivesGuys();
	m.whoAmI();

	DiamondTrap *z = new DiamondTrap("BNK3R");
	z->attack("Connor");
	z->takeDamage(15);
	z->beRepaired(45);
	z->highFivesGuys();
	z->whoAmI();
	delete z;
}
