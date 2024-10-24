#include "AAnimals.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "\033[32m" << "An aanimal has been created" << "\033[0m" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
    std::cout << "\033[32m" << "An aanimal has been created" << "\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &aanimal) :_type(aanimal._type) {
    std::cout << "\033[32m" << "An aanimal has been created" << "\033[0m" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << "\033[32m" << "An aanimal has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}
AAnimal::~AAnimal() {
    std::cout << "\033[31m" << "An aanimal has been destroyed" << "\033[0m" << std::endl;
}

void AAnimal::makeSound() const {
    std::cout << "\033[1m\033[36m" << "An aanimal make a sound" << "\033[0m" << std::endl;
}

std::string AAnimal::getType() const {
    return _type;
}
