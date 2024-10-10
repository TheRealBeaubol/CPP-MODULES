/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:37:44 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/01 15:07:13 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int    main(){
    randomChump("Zombie 1");
    Zombie *zombie = newZombie("Zombie 2");
    zombie->announce();
    delete zombie;
    return 0;
}