/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:36:23 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/07 17:18:25 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "\n\n===============[Testing Constructor]====================================" << std::endl;
    ScavTrap scav("Scavvy");
    
    std::cout << RESET << "\n\n===============[Testing Attack]=========================================" << std::endl;
    scav.attack("Target 1");
    scav.attack("Target 2");
    scav.attack("Target 3");
    std::cout << RESET << "\n\n===============[Testing Gate Keeper Mode]===============================" << std::endl;
    scav.guardGate();
    std::cout << RESET << "\n\n===============[Testing Exhausting Energy]==============================" << std::endl;
    for (int i = 0; i < 50; i++) {
        scav.attack("Target 5");
    }
    std::cout << RESET << "\n\n===============[Testing Take Damage]====================================" << std::endl;
    scav.takeDamage(30);
    scav.takeDamage(80);
    std::cout << RESET << "\n\n===============[Testing Be Repaired After Death]========================" << std::endl;
    scav.beRepaired(20);
    std::cout << RESET << "\n\n===============[Testing Attack While Dead]==============================" << std::endl;
    scav.attack("Target 4");
    std::cout << RESET << "\n\n===============[Testing Taking More Damage and Repairing]===============" << std::endl;
    scav.takeDamage(50);
    scav.beRepaired(20);

    return 0;
}