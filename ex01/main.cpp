#include "iter.hpp"

// class Awesome
// {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main(void) {
//     int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
//     Awesome tab2[5];

//     iter(tab, 5, print);
//     iter(tab2, 5, print);
//     return 0;
// }

void is_val(int const &n) {
    if (n > 100)
	    std::cout << "number is bigger than 100" << std::endl;
    else
        std::cout << "number is not big enough" << std::endl;
}

void is_42(std::string const &s) {
    if (s == "42seoul")
	    std::cout << "Yes it is!" << std::endl;
    else
        std::cout << "No it isn't!" << std::endl;
}

int main(void) {
    std::cout << "===test int arry==="<< std::endl;
    int arr[3];
    arr[0] = 124;
    arr[1] = 67;
    arr[2] = 101;
	iter(arr, 3, is_val);
    std::cout << "===test string arry==="<< std::endl;
    std::string* strs = new std::string[3];
	strs[0] = "cadet";
	strs[1] = "42seoul";
	strs[2] = "asdad";
	iter(strs, 3, is_42);
	return 0;
}