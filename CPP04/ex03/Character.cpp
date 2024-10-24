#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _inventory() {
    for (int i = 0; i < 4; i++) {
        _inventory[i] = NULL;
    }
    std::cout << "\033[32m" << "A character has been created" << "\033[0m" << std::endl;
}

Character::Character(std::string const &name) : _name(name), _inventory() {
    for (int i = 0; i < 4; i++) {
        _inventory[i] = NULL;
    }
    std::cout << "\033[32m" << "A character has been created" << "\033[0m" << std::endl;
}

Character::Character(Character const &character) : _name(character._name), _inventory() {
    for (int i = 0; i < 4; i++) {
        if (character._inventory[i] != NULL)
            _inventory[i] = character._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
    std::cout << "\033[32m" << "A character has been created" << "\033[0m" << std::endl;
}

Character &Character::operator=(Character const &other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; i++) {
            if (_inventory[i] != NULL) {
                delete _inventory[i];
                _inventory[i] = NULL;
            }
        }
        for (int i = 0; i < 4; i++) {
            if (other._inventory[i] != NULL)
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    std::cout << "\033[32m" << "A character has been created" << "\033[0m" << std::endl;
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
    std::cout << "\033[31m" << "A character has been destroyed" << "\033[0m" << std::endl;
}
std::string const & Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++)
        if (_inventory[i] == NULL) {
            _inventory[i] = m;
            return;
        }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4)
        _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL) {
        _inventory[idx]->use(target);
    }
}
