#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	std::cout << "Default Dog constructor!" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << "Copy constructor!" << std::endl;
	*this = src;
}

Dog::Dog(Dog& src) : Animal(src)
{
	std::cout << "Copy constructor!" << std::endl;
	*this = src;
}

Dog&	Dog::operator=(Dog const &rhs)
{
	if ( this != &rhs )
		_type = rhs._type;
	std::cout << "Assignation operator called!" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void		Dog::makeSound(void) const
{
	std::cout << this->_type << " dog sound, bowow!" << std::endl;
}