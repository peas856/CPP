#include "Ice.hpp"

Ice::Ice()
{
	_type = "ice";
}

Ice::Ice(Ice const& src)
{
	*this = src;
}

Ice::~Ice()
{
}

Ice& Ice::operator=(Ice const& rhs) {
	(void)rhs;
	return *this;
}

AMateria* Ice::clone(void) const {
	AMateria *clone_m = new Ice();
	return clone_m;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}