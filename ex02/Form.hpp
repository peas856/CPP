#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form {

	public:
		Form();
		Form(std::string const& name, const int gradeSign, const int gradeExecute);
		Form(Form const& src);
		~Form();
		Form& operator=(Form const& rhs);
		std::string const& getName(void) const;
		int const getgradeSign(void) const;
		int const getgradeExecute(void) const;
		bool getsign(void) const;
        void beSigned(Bureaucrat& man);
		virtual void executeForm(void) const = 0;
		void execute(Bureaucrat const& executor) const;
		class GradeTooHighException : public std::exception
        {
			public:
				virtual const char* what(void) const throw ();
		};
		class GradeTooLowException : public std::exception 
        {
			public:
				virtual const char* what(void) const throw ();
		};
		class NoSignException : public std::exception {
			public:
				const char* what(void) const throw ();
		};

	private:
        void isGrade(int grade);
        std::string	const	_name;
		int const			_gradeSign;
		int const			_gradeExecute;
		bool				_sign;
};

std::ostream& operator<<(std::ostream& os, const Form& rhs);


#endif