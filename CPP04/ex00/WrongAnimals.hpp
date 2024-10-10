/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:24:47 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/08 16:25:33 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALS_HPP
# define WRONGANIMALS_HPP

#include <iostream>

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        virtual ~WrongAnimal();
        virtual void makeSound() const;
        std::string getType() const;
};

class WrongDog : public WrongAnimal {
    public:
        WrongDog();
        virtual ~WrongDog();
        void makeSound() const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        virtual ~WrongCat();
        void makeSound() const;
};

#endif