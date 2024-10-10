/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:44:50 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 17:49:56 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << "\033[32m" << "An ice has been created" << "\033[0m" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria(src) {
    std::cout << "\033[32m" << "An ice has been created" << "\033[0m" << std::endl;
}

Ice::~Ice() {
    std::cout << "\033[31m" << "An ice has been destroyed" << "\033[0m" << std::endl;
}

Ice & Ice::operator=(Ice const & rhs) {
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

AMateria* Ice::clone() const {
    return new Ice(*this);
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}