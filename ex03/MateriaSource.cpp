#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	n_material = 0;
}

MateriaSource::MateriaSource(MateriaSource const& src) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < n_material; i++) {
		delete _material[i];
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs) {
	for (int i = 0; i < n_material; i++)
		delete _material[i];
	for (int i = 0; i < rhs.n_material; i++)
		*_material[i] = *rhs._material[i]->clone();
	n_material = rhs.n_material;
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	if (!m || n_material == 4)
		delete m;
	else
	{
		_material[n_material] = m;
		n_material++;
	}
}

AMateria* MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < n_material; i++) {
		if (_material[i]->getType() == type)
			return _material[i];
	}
	std::cout << "Error : can not find materia !" << std::endl;
	return 0;
}