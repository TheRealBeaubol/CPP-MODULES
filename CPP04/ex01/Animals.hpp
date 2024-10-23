/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:34 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:10:14 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &animal);
        Animal &operator=(const Animal &other);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

class Dog : public Animal {
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

class Cat : public Animal {
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