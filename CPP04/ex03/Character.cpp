/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:59:36 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 18:59:37 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
    std::cout << "\033[32m" << "A character has been created" << "\033[0m" << std::endl;
}

Character::Character(Character const & src) {
    _name = src._name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = src._inventory[i];
    std::cout << "\033[32m" << "A character has been created" << "\033[0m" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
        delete _inventory[i];
    std::cout << "\033[31m" << "A character has been destroyed" << "\033[0m" << std::endl;
}

Character & Character::operator=(Character const & rhs) {
    if (this != &rhs) {
        _name = rhs._name;
        for (int i = 0; i < 4; i++)
            _inventory[i] = rhs._inventory[i];
    }
    return *this;
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
