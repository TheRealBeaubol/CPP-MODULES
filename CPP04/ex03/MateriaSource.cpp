/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:08:04 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 18:13:39 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        _templates[i] = NULL;
    std::cout << "\033[32m" << "A materia source has been created" << "\033[0m" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
    for (int i = 0; i < 4; i++)
        _templates[i] = src._templates[i];
    std::cout << "\033[32m" << "A materia source has been created" << "\033[0m" << std::endl;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++)
        delete _templates[i];
    std::cout << "\033[31m" << "A materia source has been destroyed" << "\033[0m" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs){
    if (this != &rhs) {
        for (int i = 0; i < 4; i++)
            _templates[i] = rhs._templates[i];
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (_templates[i] == NULL) {
            _templates[i] = m;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (_templates[i] != NULL && _templates[i]->getType() == type)
            return _templates[i]->clone();
    }
    return NULL;
}