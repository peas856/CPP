#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0), default_hp(10)
{
	std::cout << " Default constructor!" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : name(str), hitPoints(10), energyPoints(10), attackDamage(0), default_hp(10)
{
	std::cout << name << ": name included constructor!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : name(src.name + ".copy"), hitPoints(src.hitPoints), energyPoints(src.energyPoints), \
											attackDamage(src.attackDamage), default_hp(src.default_hp)
{
	std::cout << src.name << ": Copy constructor!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& src) : name(src.name + ".copy"), hitPoints(src.hitPoints), energyPoints(src.energyPoints), \
											attackDamage(src.attackDamage), default_hp(src.default_hp)
{
	std::cout << src.name << ": Copy constructor!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << ": is destructed!" << std::endl;
}

ClapTrap&				ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << obj.name << "Assign operator!" << std::endl;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->name = obj.name + ".assign";
	this->attackDamage = obj.attackDamage;
	return *this;
}

void		ClapTrap::attack(std::string const & target)
{
	if (this->hitPoints <= 0)
		std::cout << this->name << " is dead!" << std::endl;
	else
		std::cout << this->name << " attacked " << target << " of " << this->attackDamage << " damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints <= 0)
	{
		std::cout << this->name << "is dead!" << std::endl;
		return ;
	}
	if (amount >= this->hitPoints)
	{
		std::cout << this->name << "got <" << amount << "> dammage and died !" << std::endl;
		this->hitPoints = 0;
	}
	else
	{
		this->hitPoints = this->hitPoints - amount;
		std::cout << this->name << " gets <" << amount << "> dammage and now has <" << this->hitPoints << "> HP!" << std::endl;
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints + amount >= default_hp)
		this->hitPoints = default_hp;
	else
		this->hitPoints = this->hitPoints + amount;
	std::cout << this->name << " is repaired <" << this->hitPoints << "> hitPoints !" << std::endl;
	
}