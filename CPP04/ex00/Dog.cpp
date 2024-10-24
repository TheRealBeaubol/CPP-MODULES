#include "Dog.hpp"

Dog::Dog(){
    _type = "Dog";
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "\033[31m" << "A dog has been destroyed" << "\033[0m" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Bark Bark" << "\033[0m" << std::endl;
}