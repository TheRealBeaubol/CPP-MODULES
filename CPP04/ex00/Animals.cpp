#include "Animals.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

Animal::Animal(const Animal &animal) :_type(animal._type) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}
Animal::~Animal() {
    std::cout << "\033[31m" << "An animal has been destroyed" << "\033[0m" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "\033[1m\033[36m" << "An animal make a sound" << "\033[0m" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}
