/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:29:13 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/10 15:17:38 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    
    std::cout << BOLD_WHITE << "[DiamondTrap]" << RESET << GREEN << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << BOLD_WHITE << "[DiamondTrap]" << RESET << RED << " destructor called" << std::endl;
}
void DiamondTrap::whoAmI() {
    std::cout << BOLD_WHITE << "[DiamondTrap] " << RESET << "I am " << BOLD_BLUE << _name << RESET << " and my ClapTrap name is " << BOLD_BLUE << ClapTrap::_name << RESET << std::endl;
}
