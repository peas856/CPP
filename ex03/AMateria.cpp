#include "AMateria.hpp"

AMateria::AMateria(void) 
{
}

AMateria::AMateria(std::string const& type)
{
	_type = type;
}

AMateria::AMateria(AMateria const& src) {
	*this = src;
}

AMateria::~AMateria(void) 
{
}

AMateria& AMateria::operator=(AMateria const& rhs)
{
	(void)rhs;
	return *this;
}

std::string const& AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}