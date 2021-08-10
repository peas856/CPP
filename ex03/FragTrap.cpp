#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << name << " FragTrap constructor !" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str)
{
	std::cout << name << " FragTrap constructor !" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	this->default_hp = 100;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
{
	std::cout << src.name << " FragTrap constructor !" << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << name << " FragTrap is destructed!" << std::endl;
}


FragTrap&   FragTrap::operator=( FragTrap const & obj )
{
	ClapTrap::operator=(obj);
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap : ";
    ClapTrap::attack(target);
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap : ";
	ClapTrap::takeDamage(amount);
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap : ";
	ClapTrap::beRepaired(amount);
}

void		FragTrap::highFivesGuys( void )
{
	std::cout << name << " FragTrap has requested highFive!" << std::endl;
}