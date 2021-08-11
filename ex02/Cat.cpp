#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "Cat";
	_brain = new Brain;
	std::cout << "Default Cat constructor!" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	_type = src._type;
	_brain = new Brain(*src._brain);
	std::cout << "Copy cat constructor!" << std::endl;
}

Cat::Cat(Cat& src) : Animal(src)
{
	this->_type = src._type;
	_brain = new Brain(*src._brain);
	std::cout << "Copy cat constructor!" << std::endl;
}

Cat&	Cat::operator=(Cat const &rhs)
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		*_brain = *rhs._brain;
	}
	std::cout << "Assignation operator called!" << std::endl;
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void		Cat::makeSound(void) const
{
	std::cout << this->_type << " cat sound, niyaaaong!" << std::endl;
}

std::string	Cat::getIdea(int idx) const
{
	return this->_brain->getIdea(idx);
}