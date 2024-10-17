/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:53 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/17 11:24:50 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal() : _type("Animal") {
    new Brain();
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

Animal::~Animal() {
    delete _brain;
    std::cout << "\033[31m" << "An animal has been destroyed" << "\033[0m" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "\033[1m\033[36m" << "An animal make a sound" << "\033[0m" << std::endl;
}

std::string Animal::getType() const {
    return _type;
}

Dog::Dog(){
    _type = "Dog";
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::~Dog() {
    std::cout << "\033[31m" << "A dog has been destroyed" << "\033[0m" << std::endl;
}

Cat::Cat() {
    _type = "Cat";
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::~Cat() {
    std::cout << "\033[31m" << "A cat has been destroyed" << "\033[0m" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Bark Bark" << "\033[0m" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Meow Meow" << "\033[0m" << std::endl;
}

