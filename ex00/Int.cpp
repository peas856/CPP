#include "Int.hpp"

Int::Int() {

}

Int::Int(std::string const& str) {
	_str = str;
    _i = stoi(str);
}

Int::Int(Int const& src) {
	*this = src;
}
Int::~Int(void) {}

Int& Int::operator=(Int const& rhs) {
	_str = rhs._str;
	_i = rhs._i;

	return *this;
}

std::string Int::toChar(void) const {
	std::string s;
	char c = static_cast<char>(_i);
	
	s += c;
	if (!std::isprint(c)) {
		throw NonDisplayableException();
	} else {
		return "'" + s + "'";
	}
}

int Int::toInt(void) const {
	return _i;
}

float Int::toFloat(void) const {
	return static_cast<float>(_i);
}

double Int::toDouble(void) const {
	return static_cast<double>(_i);
}

const char* Int::NonDisplayableException::what(void) const throw () {
	return "Non displayable";
}

const char* Int::ImpossibleException::what(void) const throw () {
	return "impossible";
}