#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <iterator>
#include <algorithm>

class FindException : public std::exception {
	const char* what(void) const throw () {
		return "Error: can not find";
	}
};

template<typename T>
typename T::iterator easyfind(T& container, int n) {
	typename T::iterator pos;

	if ((pos = std::find(container.begin(), container.end(), n)) != container.end())
		return pos;
	else
		throw FindException();
}

#endif