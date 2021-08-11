#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	std::cout <<"-------test 1-------" <<std::endl;
	const Animal** group = new const Animal*[4];
	for (int i = 0; i < 2; i++)
		group[i] = new Cat;
	for (int i = 2; i < 4; i++)
		group[i] = new Dog;
	for (int i = 0; i < 4; i++){
		group[i]->makeSound();
		std::cout << i << group[i]->getIdea(1) << std::endl;
	}
	for (int i = 0; i < 4; i++)
		delete group[i];
	delete [] group;

	std::cout <<"-------test 2-------" <<std::endl;
	const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak	
	delete i;

	std::cout <<"-------test 3-------" <<std::endl;
	Dog dog1;
	Dog dog2 = dog1;
	dog2.setIdea("text edited", 1);
	std::cout << dog2.getIdea(1) <<std::endl;
	std::cout << dog1.getIdea(1) <<std::endl;

	std::cout <<"-------test 4-------" <<std::endl;
	// const Animal* meta = new Animal();
	const Animal* a = new Dog();
	const Animal* b = new Cat();
	std::cout << a->getType() << " " << std::endl;
	std::cout << b->getType() << " " << std::endl;
	a->makeSound(); //will output the cat sound!
	b->makeSound();
	// meta->makeSound();
	// delete meta;
	delete a;
	delete b;

	return (0);
}