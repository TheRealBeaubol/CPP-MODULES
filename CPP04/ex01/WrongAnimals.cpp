/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:25:40 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 16:42:31 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimals.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "\033[32m" << "A WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "\033[31m" << "A WrongAnimal has beel deleted" << "\033[0m" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "\033[1m\033[36m" << "A WrongAnimal make a sound" << "\033[0m" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}

WrongDog::WrongDog() {
    _type = "WrongDog";
    std::cout << "\033[32m" << "A WrongDog has been created" << "\033[0m" << std::endl;
}

WrongDog::~WrongDog() {
    std::cout << "\033[31m" << "A WrongDog has been deleted" << "\033[0m" << std::endl;
}

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "\033[31m" << "A WrongCat has been destroyed" << "\033[0m" << std::endl;
}

void WrongDog::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Meow Meow" << "\033[0m" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Bark Bark" << "\033[0m" << std::endl;
}

