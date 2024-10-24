#include "Animals.hpp"
#include "WrongAnimals.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\033[1m\033[34m -----------------[ANIMALS]-----------------\033[0m" << std::endl;
   
    const Animal* meta1 = new Animal();
    const Animal* dogAnimal = new Dog();
    const Animal* catAnimal = new Cat();
   
    std::cout << "Animal Type -> " << dogAnimal->getType() << " " << std::endl;
    std::cout << "Animal Type -> " << catAnimal->getType() << " " << std::endl;
    catAnimal->makeSound();
    dogAnimal->makeSound();
    meta1->makeSound();
   
    delete meta1;
    delete dogAnimal;
    delete catAnimal;


    std::cout << "\033[1m\033[34m --------------[WRONG ANIMALS]--------------\033[0m" << std::endl;
    
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* wrongcatAnimal = new WrongCat();
   
    std::cout << "Animal Type -> " << wrongcatAnimal->getType() << " " << std::endl;
    wrongcatAnimal->makeSound();
    meta2->makeSound();
    
    delete meta2;
    delete wrongcatAnimal;
    
    return 0;
}