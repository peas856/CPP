#include "Zombie.hpp"

Zombie::Zombie(std::string const name)
{
    this->name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << ">";
	std::cout << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "GRRR <" << this->name << "> died..." << std::endl;
}