#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("<RobotomyRequest>", 72, 45) {
	_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target) : Form("<RobotomyRequest>", 72, 45) {
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& src) : Form("<RobotomyRequest>", 72, 45) {
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs) {
	_target = rhs._target;

	return *this;
}

void RobotomyRequestForm::executeForm(void) const {
	srand(time(NULL));
    int random = rand() % 100;
	std::cout << "* DRILLING NOISE *" << std::endl;
	if (random > 50)
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << _target << " is a failure!" << std::endl;
}