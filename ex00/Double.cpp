#include "Double.hpp"

Double::Double() {

}

Double::Double(std::string const& str) {
	_str = str;
    _d = stod(str);
}

Double::Double(Double const& src) {
	*this = src;
}
Double::~Double(void) {}

Double& Double::operator=(Double const& rhs) {
	_str = rhs._str;
	_d = rhs._d;
	return *this;
}

#include <stdio.h>
std::string Double::toChar(void) const {
	char c;
	std::string s;

	c = static_cast<char>(_d);
	s += c;
	if (_str == "-inf" || _str == "+inf" || _str == "nan") {
		throw ImpossibleException();
	} else if (!std::isprint(c)) {
		throw NonDisplayableException();
	} else {
		return "'" + s + "'";
	}
}

int Double::toInt(void) const {
	if (_str == "-inf" || _str == "+inf" || _str == "nan") {
		throw ImpossibleException();
	} else {
		return static_cast<int>(_d);
	}
}

float Double::toFloat(void) const {
	if (_str == "-inf" || _str == "+inf" || _str == "nan") {
		throw NanfException();
	} else {
		return static_cast<float>(_d);
	}
}

double Double::toDouble(void) const {
	if (_str == "-inf" || _str == "+inf" || _str == "nan") {
		throw NandException();
	} else {
		return _d;
	}
}

const char* Double::NonDisplayableException::what(void) const throw () {
	return "Non displayable";
}

const char* Double::ImpossibleException::what(void) const throw () {
	return "impossible";
}

const char* Double::NanfException::what(void) const throw () {
	return "nanf";
}

const char* Double::NandException::what(void) const throw () {
	return "nan";
}
