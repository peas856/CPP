#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap *a = new FragTrap("Player a");
	FragTrap *b = new FragTrap("Player b");
	a->attack("Player b");
	b->takeDamage(30);
	b->beRepaired(10);
	b->highFivesGuys();
	delete (a);
	delete (b);
	return(0);
}