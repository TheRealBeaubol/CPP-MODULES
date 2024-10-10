/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:36:43 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/07 16:30:18 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << BOLD_WHITE << "[ClapTrap]" << RESET << GREEN << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << BOLD_WHITE << "[ClapTrap]" << RESET << RED << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << RESET << " attacks "  << BOLD_BLUE << target << RESET << ", causing " << BOLD_RED << this->_attackDamage << " points of damage!" << std::endl;
        this->_energyPoints -= 1;
    } else if (this->_hitPoints <= 0) {
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << RESET << " is " << BOLD_RED << "dead" << RESET << ", he can't attack." << std::endl;
    } else{
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << RESET << " is out of " << BOLD_YELLOW << "energy!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->_hitPoints -= amount;
     if (this->_hitPoints <= 0) {
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << BOLD_RED << " perish" << RESET << " from an attack" << std::endl;
     } else {
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << RESET << " was hit and takes " << BOLD_RED << amount << " damage!" << std::endl;
     }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints > 0 && this->_hitPoints > 0) {
        this->_energyPoints -= 1;
        this->_hitPoints += amount;
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << RESET << " repairs himself by giving himself " << BOLD_GREEN << amount << " hit points back" << RESET << ", he now has "<< BOLD_GREEN << this->_hitPoints << " hit points." << std::endl;
    } else if (this->_hitPoints <= 0) {
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << RESET << " is " << BOLD_RED << "dead" << RESET << ", he can't be repaired." << std::endl;
    } else{
        std::cout << BOLD_WHITE << "[ClapTrap] " << BOLD_BLUE << this->_name << RESET << " is out of " << BOLD_YELLOW << "energy!" << std::endl;
    }
}