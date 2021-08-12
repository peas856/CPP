#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <time.h>

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const& target);
		RobotomyRequestForm(RobotomyRequestForm const& src);
		~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs);
		void executeForm(void) const;

	private:
		std::string _target;
};

#endif
