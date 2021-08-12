#include "Intern.hpp"

Intern::Intern(void) {
	fp[0] = &Intern::createShrubberyCreationForm;
	fp[1] = &Intern::createRobotomyRequestForm;
	fp[2] = &Intern::createPresidentialPardonForm;
}

Intern::Intern(Intern const& src) {
	fp[0] = &Intern::createShrubberyCreationForm;
	fp[1] = &Intern::createRobotomyRequestForm;
	fp[2] = &Intern::createPresidentialPardonForm;
	*this = src;
}

Intern::~Intern(void) {}

Intern& Intern::operator=(Intern const& rhs) {
	(void)rhs;
	return *this;
}

Form* Intern::makeForm(std::string const& name, std::string const& target) {
    std::string names[] = { "<ShrubberyCreation>", "<RobotomyRequest>", "<Presidential>"};
	for (int i = 0; i < 3; i++) {
		if (name == names[i]) 
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*fp[i])(target);
		}
	}
	std::cout << "Intern can not create " << name << " because the form is unknown" << std::endl;
	return 0;
}

Form* Intern::createShrubberyCreationForm(std::string const& target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::createRobotomyRequestForm(std::string const& target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::createPresidentialPardonForm(std::string const& target) {
	return new PresidentialPardonForm(target);
}