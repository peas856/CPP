#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default name"), _grade(1) {
}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name) ,_grade(grade) {
	isGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) :_name(src._name) {
	*this = src;
}

Bureaucrat::~Bureaucrat(void) {

}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs){
    _grade = rhs._grade;
	return *this;
}

std::string const& Bureaucrat::getName(void) const {
	return _name;
}

int Bureaucrat::getGrade(void) const {
	return _grade;
}

void Bureaucrat::incrementGrade(void) {
	_grade--;
	isGrade();
}

void Bureaucrat::decrementGrade(void) {
	_grade++;
	isGrade();
}

void Bureaucrat::signForm(Form& form) {
	try 
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	} 
	catch (std::exception& e) 
	{
		std::cout << _name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::execute_Form(Form const& form) {
	try 
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::isGrade(void) {
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
    else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw () {
	return ("Exception : grade is too high!");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw () {
	return ("Exception : grade is too low!");
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs) {
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return os;
}