/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:53 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 17:50:45 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal() : _type("Animal") {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

Animal::Animal(const Animal &animal) :_type(animal._type) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}
Animal::~Animal() {
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

Dog::Dog(std::string type) : Animal(type) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "\033[31m" << "A dog has been destroyed" << "\033[0m" << std::endl;
}

Cat::Cat() {
    _type = "Cat";
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
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

