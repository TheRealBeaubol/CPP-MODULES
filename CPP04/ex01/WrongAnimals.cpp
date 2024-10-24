#include "WrongAnimals.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "\033[32m" << "An WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "\033[32m" << "An WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) :_type(wronganimal._type) {
    std::cout << "\033[32m" << "An WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "\033[32m" << "An WrongAnimal has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "\033[31m" << "An WrongAnimal has been destroyed" << "\033[0m" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "\033[1m\033[36m" << "An WrongAnimal make a sound" << "\033[0m" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}
