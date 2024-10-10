/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:43:51 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/05 14:47:37 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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