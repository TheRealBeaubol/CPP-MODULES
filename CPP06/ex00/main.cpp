/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:56:36 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/06 19:25:46 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac == 1) {
        std::cout << "Error: You must provide an argument" << std::endl;
    } else if (ac > 2) {
        std::cout << "Error: Too many arguments" << std::endl;
    } else {
        ScalarConverter::convert(av[1]);
    }
    return 0;
}
