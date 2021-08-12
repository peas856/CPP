#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("<Presidential>", 25, 5) {
	_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target) : Form("<Presidential>", 25, 5) {
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& src) : Form("<Presidential>", 25, 5) {
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs) {
	_target = rhs._target;
	return *this;
}

void PresidentialPardonForm::executeForm(void) const {
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}