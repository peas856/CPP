#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "Default WrongCat constructor!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "Copy Wrongcat constructor!" << std::endl;
	*this = src;
}

WrongCat::WrongCat(WrongCat& src) : WrongAnimal(src)
{
	std::cout << "Copy Wrongcat constructor!" << std::endl;
	*this = src;
}

WrongCat&	WrongCat::operator=(WrongCat const &rhs)
{
	if ( this != &rhs )
		this->_type = rhs._type;
	std::cout << "Assignation operator called!" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void		WrongCat::makeSound(void) const
{
	std::cout << this->_type << " Wrongcat sound, niyaaaong!" << std::endl;
}