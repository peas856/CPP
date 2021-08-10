#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap *a = new ScavTrap("Player a");
	ScavTrap *b = new ScavTrap("Player b");
	a->attack("Player b");
	b->takeDamage(40);
	b->beRepaired(20);
	b->guardGate();
	delete (a);
	delete (b);
	return(0);
}