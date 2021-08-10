#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap *a = new ClapTrap("Player a");
	ClapTrap *b = new ClapTrap("Player b");
	a->attack("Player b");
	b->takeDamage(0);
	b->takeDamage(10);
	b->beRepaired(100);
	delete (a);
	delete (b);
	return(0);
}