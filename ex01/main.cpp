#include "iter.hpp"

void is_val(int &n) {
    if (n > 100)
	    std::cout << "number is bigger than 100" << std::endl;
    else
        std::cout << "number is not big enough" << std::endl;
}

void is_42(std::string &s) {
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