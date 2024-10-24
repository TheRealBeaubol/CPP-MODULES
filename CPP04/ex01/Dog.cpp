#include "Dog.hpp"

Dog::Dog(){
    _type = "Dog";
    _brain = new Brain();
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain()) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*dog._brain)) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "\033[31m" << "A dog has been destroyed" << "\033[0m" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Bark Bark" << "\033[0m" << std::endl;
}

Brain *Dog::getBrain() const {
    return _brain;
}