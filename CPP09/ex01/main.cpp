/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:31:05 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/19 16:47:06 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {

    if (ac != 2) {
        std::cout << "Usage: ./RPN [Polish mathematical expression]" << std::endl;
        return 1;
    }
    RPN rpn;
    rpn.calculate(av[1]);
}