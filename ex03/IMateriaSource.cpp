#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void) {
	n_material = 0;
}

IMateriaSource::IMateriaSource(IMateriaSource const& src)
{
	*this = src;
}

IMateriaSource::~IMateriaSource(void)
{
}

IMateriaSource& IMateriaSource::operator=(IMateriaSource const& rhs) {
	for (int i = 0; i < n_material; i++)
		delete _material[i];
	for (int i = 0; i < rhs.n_material; i++) {
		*_material[i] = *rhs._material[i]->clone();
	}
	n_material = rhs.n_material;
	return *this;
}