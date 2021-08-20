#include "span.hpp"

Span::Span(void) {
	_slot = 0;
}

Span::Span(unsigned int N) {
	_slot = N;
}

Span::Span(Span const& src) {
	*this = src;
}

Span::~Span(void) {}

Span& Span::operator=(Span const& rhs) {
	_slot = rhs._slot;
	_vec = rhs._vec;
	return *this;
}

void Span::addNumber(int n) {
	if (_vec.size() == _slot)
		throw FullException();
	else
		_vec.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (_vec.size() + std::distance(begin, end) > _slot)
		throw FullException();
	else
    {
    	while (begin != end)
        {
            _vec.push_back(*begin);
            begin++;
        }
    }
}

unsigned long Span::shortestSpan(void) {
	long long ret; 
	long long tmp;

	if (_vec.size() <= 1) {
		throw EmptyException();
	}
	std::sort(_vec.begin(), _vec.end());
    ret = *(_vec.end() - 1) - *_vec.begin();
	for (int i = 0; i < _vec.size() - 1; i++) {
		tmp = (long long)_vec[i + 1] - (long long)_vec[i];
		if (tmp < ret)
			ret = tmp;
	}
	return ret;
}

unsigned long Span::longestSpan(void) {
	long long ret = 0;
	long long max = 0;
	long long min = 0;
	if (_vec.size() <= 1) {
		throw EmptyException();
	}
	max = (long long)(*std::max_element(_vec.begin(), _vec.end()));
	min = (long long)(*std::min_element(_vec.begin(), _vec.end()));
	ret = max - min;
	return ret;
}

const char* Span::FullException::what(void) const throw () {
	return "It is full!";
}

const char* Span::EmptyException::what(void) const throw () {
	return "It is empty!";
}