/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:56:29 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/10 14:34:13 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "ERROR ! Usage : ./harlFilter [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return 1;
    }
    Harl harl;
    harl.filter(av[1]);
    return 0;
}