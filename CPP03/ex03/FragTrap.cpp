/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:22:37 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/10 14:41:51 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << BOLD_WHITE << "[FragTrap]" << RESET << GREEN << " constructor called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << BOLD_WHITE << "[FragTrap]" << RESET << RED << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
    std::cout << BOLD_WHITE << "[FragTrap] " << BOLD_BLUE << _name << RESET << " request a " << BOLD_CYAN << "high five!" << RESET << std::endl;
}