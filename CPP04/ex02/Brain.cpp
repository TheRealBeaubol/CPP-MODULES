/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:03 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:13:59 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "\033[32m" << "A brain has been created" << "\033[0m" << std::endl;
}

Brain::Brain(const Brain &brain) {
    std::cout << "\033[32m" << "A brain has been created" << "\033[0m" << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] = brain._ideas[i];
    }
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "\033[32m" << "A brain has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            _ideas[i] = other._ideas[i];
        }
    }
    return *this;
}

Brain::~Brain() {
    std::cout << "\033[31m" << "A brain has been destroyed" << "\033[0m" << std::endl;
}

void Brain::setIdea(int index, std::string idea) {
    if (-1 < index && index < 100)
        _ideas[index] = idea;
}

std::string Brain::getIdea(int index) const {
    if (-1 < index && index < 100)
        return _ideas[index];
    return "No idea";
}