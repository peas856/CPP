#include "ICharacter.hpp"

ICharacter::ICharacter(void) :n_material(0), n_spare(0)
{}

ICharacter::ICharacter(ICharacter const& src)
{
	*this = src;
}

ICharacter::~ICharacter(void)
{}

ICharacter& ICharacter::operator=(ICharacter const& rhs)
{
	for (int i = 0; i < n_material; i++)
		delete _inventory[i];
	for (int i = 0; i < n_spare; i++)
		delete _spare[i];
	for (int i = 0; i < rhs.n_material; i++)
		_inventory[i] = rhs._inventory[i]->clone();
	for (int i = 0; i < rhs.n_spare; i++)
		_spare[i] = rhs._spare[i]->clone();

	_name = rhs._name;
	n_material = rhs.n_material;
	n_spare = rhs.n_spare;
	return *this;
}