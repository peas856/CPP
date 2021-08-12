#ifndef INTERN_HPP
# define INTERN_HPP

# define NUMBER_FORMS 3

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Form.hpp"

class Intern {

	public:
		Intern(void);
		Intern(Intern const& src);
		~Intern(void);
		Intern& operator=(Intern const& rhs);
		Form* makeForm(std::string const& name, std::string const& target);
		Form* createShrubberyCreationForm(std::string const& target);
		Form* createRobotomyRequestForm(std::string const& target);
		Form* createPresidentialPardonForm(std::string const& target);

	private:
		Form* (Intern::*fp[3])(std::string const&);
};

#endif