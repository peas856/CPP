#include "main.hpp"

Base* generate(void) {
	int random = rand() % 3;
	Base* base;

	if (random == 0){
		std::cout << "generated A" << std::endl;
		base = new A();
	}
	else if (random == 1){
		std::cout << "generated B" << std::endl;
		base = new B();
	}
	else{
		std::cout << "generated C" << std::endl;
		base = new C();
	}
	return base;
}

void identify(Base* p) {
	if (!p)
		return ;
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e) {
	}
	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception& e) {
	}
	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	
	}
	catch (std::exception& e) {
	}
}

int main(void) {
	Base* base;
	srand(time(NULL));

	for (int i = 0; i < 6; i++) {
		std::cout << "------test-----" << std::endl;
		base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
	return 0;
}

