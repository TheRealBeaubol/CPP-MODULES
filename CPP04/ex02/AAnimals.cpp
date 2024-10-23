/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimals.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:53 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 19:03:56 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimals.hpp"

AAnimal::AAnimal() : _type("AAnimal") {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal) :_type(animal._type) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other) {
    std::cout << "\033[32m" << "An animal has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "\033[31m" << "An animal has been destroyed" << "\033[0m" << std::endl;
}

void AAnimal::makeSound() const {
    std::cout << "\033[1m\033[36m" << "An animal make a sound" << "\033[0m" << std::endl;
}

std::string AAnimal::getType() const {
    return _type;
}

Dog::Dog(){
    _type = "Dog";
    _brain = new Brain();
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(std::string type) : AAnimal(type), _brain(new Brain()) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog::Dog(const Dog &dog) : AAnimal(dog), _brain(new Brain(*dog._brain)) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "\033[32m" << "A dog has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
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

Cat::Cat(std::string type) : AAnimal(type), _brain(new Brain()) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat::Cat(const Cat &cat) : AAnimal(cat), _brain(new Brain(*cat._brain)) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    std::cout << "\033[32m" << "A cat has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
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