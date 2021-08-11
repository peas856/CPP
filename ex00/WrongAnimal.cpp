#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "Default constructor!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	std::cout << "Copy constructor!" << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(WrongAnimal& src)
{
	std::cout << "Copy constructor!" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&				WrongAnimal::operator=(const WrongAnimal& rhs)
{
	if ( this != &rhs )
		_type = rhs._type;
	std::cout << "Assignation operator called!" << std::endl;
	return *this;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << this->_type << " dafualt WrongAnimal sound!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return _type;
}