/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:37:44 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/05 14:53:08 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int    main(){
    Zombie *horde = zombieHorde(8, "Zombie");
    for (int i = 0; i < 8; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}