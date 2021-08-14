#include "Char.hpp"

Char::Char() {

}

Char::Char(std::string const& str) {
	_str = str;
	_c = str[0];
}

Char::Char(Char const& src) {
	*this = src;
}
Char::~Char(void) {}

Char& Char::operator=(Char const& src) {
	_str = src._str;
	_c = src._c;
	return *this;
}

std::string Char::toChar(void) const {
	std::string s;
	s += _c;
	return "'" + s + "'";
}

int Char::toInt(void) const {
	return static_cast<int>(_c);
}

float Char::toFloat(void) const {
	return static_cast<float>(_c);
}

double Char::toDouble(void) const {
	return static_cast<double>(_c);
}