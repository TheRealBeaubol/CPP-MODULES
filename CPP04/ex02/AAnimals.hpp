/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimals.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:34 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 19:02:21 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal {
    protected:
        std::string _type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(const AAnimal &aanimal);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();
        virtual void makeSound() const = 0;
        std::string getType() const;
};

class Dog : public AAnimal {
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &dog);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
        Brain *getBrain() const;
};

class Cat : public AAnimal {
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &cat);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
        Brain *getBrain() const;
};

#endif