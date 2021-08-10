#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor !" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->default_hp = 100;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout<< name << ": ScavTrap name constructor !" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->default_hp = 100;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
{
	std::cout << src.name << " ScavTrap copy constructor !" << std::endl;
}


ScavTrap::~ScavTrap()
{
	std::cout << name << " ScavTrap is destructed!" << std::endl;
}


ScavTrap&   ScavTrap::operator=( ScavTrap const & obj )
{
	ClapTrap::operator=(obj);
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap : ";
    ClapTrap::attack(target);
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap : ";
	ClapTrap::takeDamage(amount);
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap : ";
	ClapTrap::beRepaired(amount);
}

void		ScavTrap::guardGate( void )
{
	std::cout << name << ": ScavTrap have enterred in Gate keeper mode." << std::endl;
}