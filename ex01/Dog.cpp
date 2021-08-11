#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	_brain = new Brain;
	std::cout << "Default Dog constructor!" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	_type = src._type;
	_brain = new Brain(*src._brain);
	std::cout << "Dog Copy constructor!" << std::endl;
}

Dog::Dog(Dog& src) : Animal(src)
{
	_type = src._type;
	_brain = new Brain(*src._brain);
	std::cout << "Dog Copy constructor!" << std::endl;
}

Dog&	Dog::operator=(Dog const &rhs)
{
	if ( this != &rhs )
	{
		_type = rhs._type;
		*_brain = *rhs._brain;
	}
	std::cout << "Assignation operator called!" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void		Dog::makeSound(void) const
{
	std::cout << this->_type << " dog sound, bowow!" << std::endl;
}

std::string	Dog::getIdea(int idx) const{
	return this->_brain->getIdea(idx);
}

void	Dog::setIdea(std::string str, int idx)
{
	this->_brain->setIdea(str, idx);
}