#include "ABase.hpp"

ABase::ABase() {

}

ABase::ABase(std::string const& str) {
	_str = str;
}

ABase::ABase(ABase const& src) {
	*this = src;
}
ABase::~ABase(void) {}

ABase& ABase::operator=(ABase const& rhs) {
	_str = rhs._str;
	return *this;
}

const char* ABase::NonDisplayableException::what(void) const throw () {
	return "Non displayable";
}

const char* ABase::ImpossibleException::what(void) const throw () {
	return "impossible";
}

const char* ABase::NanfException::what(void) const throw () {
	return "nanf";
}

const char* ABase::NandException::what(void) const throw () {
	return "nan";
}