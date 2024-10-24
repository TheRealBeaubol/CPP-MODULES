#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "\033[32m" << "An ice has been created" << "\033[0m" << std::endl;
}

Ice::Ice(Ice const &ice) : AMateria(ice) {
    std::cout << "\033[32m" << "An ice has been created" << "\033[0m" << std::endl;
}

Ice &Ice::operator=(Ice const &other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Ice::~Ice() {
    std::cout << "\033[31m" << "An ice has been destroyed" << "\033[0m" << std::endl;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}