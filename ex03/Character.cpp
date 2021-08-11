#include "Character.hpp"

Character::Character()
{
	n_material = 0;
	n_spare = 0;
}

Character::Character(std::string const& name)
{
	_name = name;
	n_material = 0;
	n_spare = 0;
}

Character::Character(Character const& src)
{
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < n_material; i++) {
		delete _inventory[i];
	}
	for (int i = 0; i < n_spare; i++) {
		delete _spare[i];
	}
}

Character& Character::operator=(Character const& rhs)
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

std::string const& Character::getName() const
{
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m || n_material >= 4)
		return;
	_inventory[n_material] = m->clone();
	n_material++;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= n_material)
		return;
	_spare[n_spare++] = _inventory[idx];
	for (int i = idx; i < n_material - 1; i++)
		_inventory[i] = _inventory[i + 1];
	n_material--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= n_material)
		return;
	_inventory[idx]->use(target);
}