#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clap("basic clap");
	DiamondTrap diamond("diamond");
	ScavTrap	scav("scav");
	
	
	diamond.whoAmI();
	diamond.attack("scav");
	clap.takeDamage(50);
	diamond.guardGate();
	diamond.highFivesGuys();
	return (0);
}