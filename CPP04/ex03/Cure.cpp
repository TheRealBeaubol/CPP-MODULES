/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:50:29 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:54:56 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "\033[32m" << "A cure has been created" << "\033[0m" << std::endl;
}

Cure::Cure(Cure const &cure) : AMateria(cure) {
    std::cout << "\033[32m" << "A cure has been created" << "\033[0m" << std::endl;
}

Cure &Cure::operator=(Cure const &other) {
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

Cure::~Cure() {
    std::cout << "\033[31m" << "A cure has been destroyed" << "\033[0m" << std::endl;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}