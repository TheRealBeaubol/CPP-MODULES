/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:29:11 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 19:03:05 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {
    std::cout << "\033[32m" << "A materia has been created" << "\033[0m" << std::endl;
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