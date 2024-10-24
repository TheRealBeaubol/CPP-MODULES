#include "WrongCat.hpp"

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal(wrongcat) {
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "\033[31m" << "A WrongCat has been destroyed" << "\033[0m" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Wrong Meow Meow" << "\033[0m" << std::endl;
}