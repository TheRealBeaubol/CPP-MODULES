#include "Cat.hpp"

Cat::Cat() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(std::string type) : AAnimal(type), _brain(new Brain()) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &cat) : AAnimal(cat), _brain(new Brain(*cat._brain)) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "\033[31m" << "A cat has been destroyed" << "\033[0m" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Meow Meow" << "\033[0m" << std::endl;
}


Brain *Cat::getBrain() const {
    return _brain;
}