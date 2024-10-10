/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:47:45 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/07 17:06:02 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << BOLD_WHITE << "[ScavTrap]" << RESET << GREEN << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << BOLD_WHITE << "[ScavTrap]" << RESET << RED << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << BOLD_WHITE << "[ScavTrap] " << BOLD_BLUE << _name << RESET << " attacks "  << BOLD_BLUE << target << RESET << ", causing " << BOLD_RED << _attackDamage << " points of damage!" << std::endl;
        _energyPoints -= 1;
    } else if (_hitPoints <= 0) {
        std::cout << BOLD_WHITE << "[ScavTrap] " << BOLD_BLUE << _name << RESET << " is " << BOLD_RED << "dead" << RESET << ", he can't attack." << std::endl;
    } else {
        std::cout << BOLD_WHITE << "[ScavTrap] " << BOLD_BLUE << _name << RESET << " is out of " << BOLD_YELLOW << "energy!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << BOLD_WHITE << "[ScavTrap] " << BOLD_BLUE << _name << RESET  << " is now in " << BOLD_MAGENTA << "Gate keeper mode." << std::endl;
}