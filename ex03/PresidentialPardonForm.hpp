#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const& target);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);
		void executeForm(void) const;

	private:
		std::string _target;
};

#endif