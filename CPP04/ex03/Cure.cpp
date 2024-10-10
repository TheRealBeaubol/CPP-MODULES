/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:50:29 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 17:53:55 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << "\033[32m" << "A cure has been created" << "\033[0m" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria(src) {
    std::cout << "\033[32m" << "A cure has been created" << "\033[0m" << std::endl;
}

Cure::~Cure() {
    std::cout << "\033[31m" << "A cure has been destroyed" << "\033[0m" << std::endl;
}

Cure & Cure::operator=(Cure const & rhs) {
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

AMateria* Cure::clone() const {
    return new Cure(*this);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}