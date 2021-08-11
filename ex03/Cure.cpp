#include "Cure.hpp"

Cure::Cure()
{
	_type = "cure";
}

Cure::Cure(Cure const& src)
{
	*this = src;
}

Cure::~Cure()
{
}

Cure& Cure::operator=(Cure const& rhs) {
	(void)rhs;
	return *this;
}

AMateria* Cure::clone(void) const {
	AMateria *clone_m = new Cure();
	return clone_m;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}