#include "easyfind.hpp"
#include <deque>
#include <vector>
#include <list>

template<typename T> 
void testFunc(T & container, int n) {
	try 
    {   
        easyfind(container, n);
		std::cout << "Success!" << std::endl;
	}
    catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int main(void) {
    std::cout << "===list test===" << std::endl;
	std::list<int> l;
    for (int i=0; i < 5; i++)
        l.push_back(i);
	testFunc(l, 2);
	testFunc(l, 3);
    testFunc(l, 42);
	std::cout << std::endl;
    std::cout << "===vector test===" << std::endl;
	std::vector<int> v;
    for (int i=0; i < 5; i++)
        v.push_back(i);
	testFunc(v, 2);
	testFunc(v, 3);
    testFunc(v, 42);
	std::cout << std::endl;
    std::cout << "===deque test===" << std::endl;
	std::deque<int> d;
    for (int i=0; i < 5; i++)
        d.push_front(i);
	testFunc(d, 2);
	testFunc(d, 3);
    testFunc(d, 42);
	std::cout << std::endl;

	return 0;
}