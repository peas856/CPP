#include <stdlib.h>
#include "Array.hpp"

int main(void) {
    Array<int> numbers(3);
    for (int i = 0; i < 3; i++) {
        int j = rand() % 100;
        numbers[i] = j;
        std::cout << "input random val: " << numbers[i] << std::endl;
    }
    std::cout << "=====size func test====" << std::endl;
    int val = numbers.size();
    std::cout << val << std::endl;
    std::cout << "====deep copy test===" << std::endl;
    Array<int> tmp(3);
    tmp = numbers;
    for (int i = 0; i < 3; i++) {
        numbers[i] = 1;
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "original: " << numbers[i] << std::endl;
        std::cout << "copied: " << tmp[i] << std::endl;
    }
    std::cout << "====[] operation test===" << std::endl;
    try {
        std::cout << numbers[-2] << std::endl;
    } catch(std::exception const& e) {
        std::cerr << e.what() << std::endl;
    }
    try {
        std::cout << numbers[3] << std::endl;
    } catch(std::exception const& e) {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "====test for string type===" << std::endl;
    Array<std::string> strs(3);
    Array<std::string> tmp2(3);
    strs[0] = "abc";
    strs[1] = "vans";
    strs[2] = "nike";
    tmp2 = strs;
    for (int i = 0; i < 3; i++) {
        std::cout << "strs: " << strs[i] << std::endl;
        std::cout << "tmp2: " << tmp2[i] << std::endl;
    }
    for (int i = 0; i < 3; i++) {
        strs[i] = "==";
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "n: " << strs[i] << std::endl;
        std::cout << "m: " << tmp2[i] << std::endl;
    }
    return 0;
}