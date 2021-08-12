#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const& target);
		ShrubberyCreationForm(ShrubberyCreationForm const& src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
		void executeForm(void) const;

	private:
		std::string _target;
};

#endif
