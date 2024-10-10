/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 15:08:26 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/05 15:59:00 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL) {
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
}

void HumanB::attack(void){
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon and is attacking the enemy with his hands" << std::endl;
    else
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}