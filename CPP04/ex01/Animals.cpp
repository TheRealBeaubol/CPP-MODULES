/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:53 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 19:04:41 by lboiteux         ###   ########.fr       */
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
    _brain = new Brain();
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain()) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*dog._brain)) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog() {
    delete _brain;
    std::cout << "\033[31m" << "A dog has been destroyed" << "\033[0m" << std::endl;
}

Cat::Cat() {
    _type = "Cat";
    _brain = new Brain();
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(std::string type) : Animal(type), _brain(new Brain()) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat), _brain(new Brain(*cat._brain)) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

Cat::~Cat() {
    delete _brain;
    std::cout << "\033[31m" << "A cat has been destroyed" << "\033[0m" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Bark Bark" << "\033[0m" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Meow Meow" << "\033[0m" << std::endl;
}

Brain *Dog::getBrain() const {
    return _brain;
}

Brain *Cat::getBrain() const {
    return _brain;
}