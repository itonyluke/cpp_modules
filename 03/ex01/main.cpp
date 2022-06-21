#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << GREY << START_END << WHITE << std::endl;
	ScavTrap d;
	std::cout << d << std::endl;
	d.attack("Mary");
	d.takeDamage(5);
	d.beRepaired(5);
	ScavTrap e("Patricia");
	std::cout << e << std::endl;
	e.attack("Connor");
	e.takeDamage(5);
	e.beRepaired(5);
	e.setName("Jennifer");
	e.guardGate();
	ScavTrap f(e);
	std::cout << f << std::endl;
	f.setName("FL4K");
	f.attack("Connor");
	f.takeDamage(15);
	f.beRepaired(45);
	f.guardGate();

	ClapTrap *w = new ScavTrap("BNK3R");
	w->attack("Connor");
	w->takeDamage(15);
	w->beRepaired(45);
	delete w;
	ScavTrap* robots = new ScavTrap[3];
	robots[1].attack("Connor");
	std::cout << *dynamic_cast<ScavTrap *>(&robots[1]) << std::endl;
	robots[0].takeDamage(15);
	std::cout << robots[0] << std::endl;
	robots[2].beRepaired(45);
	std::cout << robots[2] << std::endl;
	delete [] robots;
}
