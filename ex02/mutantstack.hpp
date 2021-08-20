#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <iterator>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack() {}
		MutantStack(MutantStack<T> const& src) {
			*this = src;
		}
		virtual ~MutantStack() {}
		MutantStack<T>& operator=(MutantStack<T> const& rhs) {
			this->c = rhs.c;
			return (*this);
		}
		iterator begin(void) {
			return (this->c.begin());
		}
		iterator end(void) {
			return (this->c.end());
		}
};

#endif