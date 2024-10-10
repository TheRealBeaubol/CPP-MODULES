/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:09:03 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 17:09:12 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "\033[32m" << "A brain has been created" << "\033[0m" << std::endl;
}

Brain::~Brain() {
    std::cout << "\033[31m" << "A brain has been destroyed" << "\033[0m" << std::endl;
}