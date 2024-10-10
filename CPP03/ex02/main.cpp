/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:36:23 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/07 18:35:18 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    std::cout << "\n\n===============[Testing Constructor]====================================" << std::endl;
    FragTrap frag("Fraggy");

    std::cout << RESET << "\n\n===============[Testing Attack]=========================================" << std::endl;
    frag.attack("Target 1");
    frag.attack("Target 2");
    frag.attack("Target 3");

    std::cout << RESET << "\n\n===============[Testing High Fives Request]=============================" << std::endl;
    frag.highFivesGuys();

    std::cout << RESET << "\n\n===============[Testing Exhausting Energy]==============================" << std::endl;
    for (int i = 0; i < 98; i++) {
        frag.attack("Target 4");
    }
    
    std::cout << RESET << "\n\n===============[Testing Taking Damage]===================================" << std::endl;
    frag.takeDamage(30);
    frag.takeDamage(80);

    std::cout << RESET << "\n\n===============[Testing Be Repaired]======================================" << std::endl;
    frag.beRepaired(50);
    frag.beRepaired(20);

    std::cout << RESET << "\n\n===============[Testing Attack While Dead]==============================" << std::endl;
    frag.takeDamage(100);
    frag.beRepaired(20);
    frag.attack("Target 5");

    return 0;
}
