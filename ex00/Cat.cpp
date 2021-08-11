#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	std::cout << "Default Cat constructor!" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "Copy cat constructor!" << std::endl;
	*this = src;
}

Cat::Cat(Cat& src) : Animal(src)
{
	std::cout << "Copy cat constructor!" << std::endl;
	*this = src;
}

Cat&	Cat::operator=(Cat const &rhs)
{
	if ( this != &rhs )
		this->_type = rhs._type;
	std::cout << "Assignation operator called!" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void		Cat::makeSound(void) const
{
	std::cout << this->_type << " cat sound, niyaaaong!" << std::endl;
}