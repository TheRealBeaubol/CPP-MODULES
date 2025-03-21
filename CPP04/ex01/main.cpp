#include "Animals.hpp"
#include "WrongAnimals.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    int ArraySize = 10;
    Animal *animals[ArraySize];

    for (int i = 0; i < ArraySize; i++) {
        if (i % 2 == 0) {
            std::cout << "Adding a dog" << std::endl;
            animals[i] = new Dog();
        }
        else {
            std::cout << "Adding a cat" << std::endl;
            animals[i] = new Cat();
        }
    }
    for (int i = 0; i < ArraySize; i++) {
        if (i % 2 == 0) {
            std::cout << "Destroying a dog" << std::endl;
        }
        else {
            std::cout << "Destroying a cat" << std::endl;
        }
        delete animals[i];
    }
    return (0);
}