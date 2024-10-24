#include "Zombie.hpp"

Zombie::Zombie() {
}

void Zombie::setName(std::string name) {
    this->Name = name;
}

Zombie::~Zombie(void) {
    std::cout << "Zombie " << this->Name << " is destroyed" << std::endl;
}

void    Zombie::announce(void) {
    std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}