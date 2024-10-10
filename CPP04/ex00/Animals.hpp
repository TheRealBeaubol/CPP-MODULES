/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:56:34 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 16:20:47 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>

class Animal {
    protected:
        std::string _type;
    public:
        Animal();
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};

class Dog : public Animal {
    public:
        Dog();
        virtual ~Dog();
        void makeSound() const;
};

class Cat : public Animal {
    public:
        Cat();
        virtual ~Cat();
        void makeSound() const;
};

#endif