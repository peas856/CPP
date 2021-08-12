#include "Intern.hpp"
#include "Form.hpp"

int main(void) {

	Intern newbie;
	Form* form;

	form = newbie.makeForm("<ShrubberyCreation>", "Bender");
	// Bureaucrat man("P1", 20);
	// man.signForm(*form);
	// man.execute_Form(*form);
	delete form;
	form = newbie.makeForm("<RobotomyRequest>", "Bender");
	delete form;
	form = newbie.makeForm("<Presidential>", "Bender");
	delete form;
	form = newbie.makeForm("<who knows>", "Bender");
}