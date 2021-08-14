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

// std::string ABase::getStr(void) const {
// 	return _str;
// }

// void ABase::setStr(std::string const& str) {
// 	_str = str;
// }