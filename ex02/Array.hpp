#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# define DEFAULT 3

template<typename T> class Array {
	public:
		Array() {
			_len = DEFAULT;
			_array = new T[DEFAULT];
		}
		Array(unsigned int n) {
			_len = n;
			_array = new T[_len];
		}
		Array(Array const& src) {
			_len = DEFAULT;
			_array = new T[DEFAULT];
			*this = src;
		}
		~Array(void) {
			delete[] _array;
		}
		Array& operator=(Array const& rhs) {
			delete[] _array;
			_array = new T[_len];
			for (int i = 0; i < _len; i++) {
				_array[i] = rhs._array[i];
			}
			return *this;
		}
		T& operator[](int idx) {
			if (idx < 0 || idx >= _len)
				throw rangeException();
			else
				return _array[idx];
		}
		unsigned int size(void) const {
			return _len;
		}
		class rangeException: public std::exception {
			const char * what() const throw() {
				return ("Invalid access");
			};
		};

	private:
		unsigned int	_len;
		T*				_array;
};

#endif