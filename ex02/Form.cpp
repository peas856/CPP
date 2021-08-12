#include "Form.hpp"

Form::Form(void) :  _name("defualt name"), _gradeSign(30), _gradeExecute(10), _sign(0) {
}

Form::Form(std::string const& name, const int gradeSign, const int gradeExecute) : _name(name), _gradeSign(gradeSign), _gradeExecute(gradeExecute), _sign(0) {
	isGrade(_gradeSign);
    isGrade(_gradeExecute);
}

Form::Form(Form const& src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute) {
	*this = src;
}

Form::~Form(void) {

}

Form& Form::operator=(Form const& rhs){
    _sign = rhs._sign;
	return *this;
}

std::string const& Form::getName(void) const {
	return _name;
}

int const Form::getgradeSign(void) const {
	return _gradeSign;
}

int const Form::getgradeExecute(void) const {
	return _gradeExecute;
}

bool Form::getsign(void) const {
	return _sign;
}

void Form::beSigned(Bureaucrat& man) {
	if (man.getGrade() > _gradeSign)
		throw GradeTooLowException();
	else
		_sign = true;
}

void Form::isGrade(int grade) {
	if (grade < 1)
		throw Form::GradeTooHighException();
    else if (grade > 150)
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what(void) const throw () {
	return ("Exception : grade is too high!");
}

const char* Form::GradeTooLowException::what(void) const throw () {
	return ("Exception : grade is too low!");
}

const char* Form::NoSignException::what(void) const throw () {
	return "No sign form!";
}

std::ostream& operator<<(std::ostream& os, const Form& rhs) {

    os << "<name> : " << rhs.getName();
	if (rhs.getsign())
		os << " <sign> : YES";
	else
		os << " <sign> : NO";
    os << " <grade to be signed> : " << rhs.getgradeSign();
    os << " <grade to be executed> : " << rhs.getgradeExecute();
	return os;
}

void Form::execute(Bureaucrat const& executor) const {
	if (!_sign)
		throw NoSignException();
	else if (executor.getGrade() > _gradeExecute)
		throw GradeTooLowException();
	else
		executeForm();
}