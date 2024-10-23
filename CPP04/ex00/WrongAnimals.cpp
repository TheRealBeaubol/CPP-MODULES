/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:53 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:19:27 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimals.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "\033[32m" << "A WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
    std::cout << "\033[32m" << "A WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) :_type(wronganimal._type) {
    std::cout << "\033[32m" << "A WrongAnimal has been created" << "\033[0m" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    std::cout << "\033[32m" << "A WrongAnimal has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "\033[31m" << "A WrongAnimal has been destroyed" << "\033[0m" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "\033[1m\033[36m" << "A WrongAnimal make a sound" << "\033[0m" << std::endl;
}

std::string WrongAnimal::getType() const {
    return _type;
}

WrongDog::WrongDog(){
    _type = "WrongDog";
    std::cout << "\033[32m" << "A WrongDog has been created" << "\033[0m" << std::endl;
}

WrongDog::WrongDog(std::string type) : WrongAnimal(type) {
    std::cout << "\033[32m" << "A WrongDog has been created" << "\033[0m" << std::endl;
}

WrongDog::WrongDog(const WrongDog &wrongdog) : WrongAnimal(wrongdog) {
    std::cout << "\033[32m" << "A WrongDog has been created" << "\033[0m" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other) {
    std::cout << "\033[32m" << "A WrongDog has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongDog::~WrongDog() {
    std::cout << "\033[31m" << "A WrongDog has been destroyed" << "\033[0m" << std::endl;
}

WrongCat::WrongCat() {
    _type = "WrongCat";
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongcat) : WrongAnimal(wrongcat) {
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    std::cout << "\033[32m" << "A WrongCat has been created" << "\033[0m" << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "\033[31m" << "A WrongCat has been destroyed" << "\033[0m" << std::endl;
}

void WrongDog::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Wrong Bark Bark" << "\033[0m" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "\033[1m\033[36m" << "Wrong Meow Meow" << "\033[0m" << std::endl;
}

