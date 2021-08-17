#include "main.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main(void) {
	Data data;
    uintptr_t raw;
    Data* copy;

    data.str = "What day is it today?";
    data.num = 210816;
    data.n = 42.195;
	
    std::cout << "====test: original data structure===" << std::endl;
    std::cout << &data << std::endl;
	std::cout << data.str << std::endl;
	std::cout << data.num << std::endl;
    std::cout << data.n << std::endl;

	raw = serialize(&data);
    std::cout <<"uintptr_t raw: "<< raw << std::endl;
	copy = deserialize(raw);
    
    std::cout << "====test2: copied data structure===" << std::endl;
    std::cout << copy << std::endl;
	std::cout << data.str << std::endl;
	std::cout << data.num << std::endl;
    std::cout << data.n << std::endl;

	return 0;
}

