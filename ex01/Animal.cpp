#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default constructor!" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Copy constructor!" << std::endl;
	*this = src;
}

Animal::Animal(Animal& src)
{
	std::cout << "Copy constructor!" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&				Animal::operator=(const Animal& rhs)
{
	if ( this != &rhs )
		_type = rhs._type;
	std::cout << "Assignation operator called!" << std::endl;
	return *this;
}

void		Animal::makeSound(void) const
{
	std::cout << this->_type << " dafualt Animal sound!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return _type;
}

std::string	Animal::getIdea(int idx) const
{
	return ("Animal getIdea func");
}