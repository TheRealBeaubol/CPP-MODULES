/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:21 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 17:24:17 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "WrongAnimals.hpp"

int main()
{
    int ArraySize = 10;
    Animal *animals[ArraySize];

    for (int i = 0; i < ArraySize; i++) {
        if (i % 2 == 0) {
            std::cout << "Adding a dog" << std::endl;
            animals[i] = new Dog();
        }
        else {
            std::cout << "Adding a cat" << std::endl;
            animals[i] = new Cat();
        }
    }
    for (int i = 0; i < ArraySize; i++) {
        if (i % 2 == 0) {
            std::cout << "Destroying a dog" << std::endl;
        }
        else {
            std::cout << "Destroying a cat" << std::endl;
        }
        delete animals[i];
    }
    return (0);
}