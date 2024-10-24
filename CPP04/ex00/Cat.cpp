#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Cat::~Cat() {
    std::cout << "\033[31m" << "A cat has been destroyed" << "\033[0m" << std::endl;
}


void Cat::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Meow Meow" << "\033[0m" << std::endl;
}

