/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:21 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 16:43:59 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "WrongAnimals.hpp"

int main()
{
    std::cout << "\033[1m\033[34m -----------------[ANIMALS]-----------------\033[0m" << std::endl;
   
    const Animal* meta1 = new Animal();
    const Animal* dogAnimal = new Dog();
    const Animal* catAnimal = new Cat();
   
    std::cout << "Animal Type -> " << dogAnimal->getType() << " " << std::endl;
    std::cout << "Animal Type -> " << catAnimal->getType() << " " << std::endl;
    catAnimal->makeSound();
    dogAnimal->makeSound();
    meta1->makeSound();
   
    delete meta1;
    delete dogAnimal;
    delete catAnimal;


    std::cout << "\033[1m\033[34m --------------[WRONG ANIMALS]--------------\033[0m" << std::endl;
    
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* wrongdogAnimal = new WrongDog();
    const WrongAnimal* wrongcatAnimal = new WrongCat();
   
    std::cout << "Animal Type -> " << wrongdogAnimal->getType() << " " << std::endl;
    std::cout << "Animal Type -> " << wrongcatAnimal->getType() << " " << std::endl;
    wrongcatAnimal->makeSound();
    wrongdogAnimal->makeSound();
    meta2->makeSound();
    
    delete meta2;
    delete wrongdogAnimal;
    delete wrongcatAnimal;
    
    return 0;
}