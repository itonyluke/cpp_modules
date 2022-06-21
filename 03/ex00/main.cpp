#include "ClapTrap.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;

	ClapTrap a;
	std::cout << a << std::endl;
	a.attack("Connor");
	a.attack("Connor");
	a.takeDamage(25);
	a.takeDamage(5);
	a.beRepaired(5);
	a.setName("FL4K");
	a.attack("Connor");
	a.takeDamage(5);
	a.beRepaired(5);
	ClapTrap b("Saturn");
	std::cout << b << std::endl;
	b.attack("James");
	b.takeDamage(10);
	b.beRepaired(10);
	ClapTrap c(b);
	std::cout << c << std::endl;
	c.setName("Uranus");
	c.attack("Callum");
	c.takeDamage(10);
	c.beRepaired(10);
	ClapTrap *w = new ClapTrap("BNK3R");
	w->attack("Connor");
	w->takeDamage(15);
	w->beRepaired(45);
	delete w;
	ClapTrap* robots = new ClapTrap[3];
	robots[1].attack("Connor");
	std::cout << robots[1] << std::endl;
	robots[0].takeDamage(15);
	std::cout << robots[0] << std::endl;
	robots[2].beRepaired(45);
	std::cout << robots[2] << std::endl;
	delete [] robots;
}
