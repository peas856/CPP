#include "Float.hpp"

Float::Float() {

}

Float::Float(std::string const& str) {
	_str = str;
    _f = stof(str);
}

Float::Float(Float const& src) {
	*this = src;
}

Float::~Float(void) {}

Float& Float::operator=(Float const& rhs) {
	_str = rhs._str;
	_f = rhs._f;

	return *this;
}

std::string Float::toChar(void) const {
	char c = static_cast<char>(_f);
	std::string s;

	s += c;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf") {
		throw ImpossibleException();
	} else if (!std::isprint(c)) {
		throw NonDisplayableException();
	} else {
		return "'" + s + "'";
	}
}

int Float::toInt(void) const {
	if (_str == "-inff" || _str == "+inff" || _str == "nanf") {
		throw ImpossibleException();
	} else {
		return static_cast<int>(_f);
	}
}

float Float::toFloat(void) const {
	if (_str == "-inff" || _str == "+inff" || _str == "nanf") {
		throw NanfException();
	} else {
		return _f;
	}
}

double Float::toDouble(void) const {
	if (_str == "-inff" || _str == "+inff" || _str == "nanf") {
		throw NandException();
	} else {
		return static_cast<double>(_f);
	}
}
