#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _type("Default") {}

AMateria::AMateria(std::string const & type) : _type(type) {
    std::cout << "\033[32m" << "A materia has been created" << "\033[0m" << std::endl;
}

AMateria::AMateria(const AMateria &amateria) : _type(amateria._type) {
    std::cout << "\033[32m" << "A materia has been created" << "\033[0m" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
    std::cout << "\033[32m" << "A materia has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

AMateria::~AMateria() {
    std::cout << "\033[31m" << "A materia has been destroyed" << "\033[0m" << std::endl;
}

std::string const & AMateria::getType() const {
    return _type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* use a materia on " << target.getName() << " *" << std::endl;
}