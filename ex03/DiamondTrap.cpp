#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), FragTrap(str + "_clap_name"),
ScavTrap(str + "_clap_name")
{
	hitPoints = this->FragTrap::hitPoints;
	energyPoints = this->ScavTrap::energyPoints;
	attackDamage = this->FragTrap::attackDamage;
	default_hp = this->FragTrap::default_hp;
	_name = str;
	std::cout << "DiamondTrap Constructor called, named :  " << this->ClapTrap::name << " and " << _name << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
    std::cout << _name << "DiamondTrap is destructed!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) : ClapTrap(src), FragTrap(src),
ScavTrap(src) {
	*this = src;
}

void	DiamondTrap::whoAmI(){
	std::cout << "2 names :" << this->ClapTrap::name << " and " << this->_name << std::endl;	
}

DiamondTrap const & DiamondTrap::operator=(DiamondTrap const & obj) {
	ClapTrap::operator=(obj);
	_name = obj._name;
	return (*this);
}

void	DiamondTrap::attack(std::string const & target) {
	ScavTrap::attack(target);
}
