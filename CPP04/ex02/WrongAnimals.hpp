/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:24:47 by lboiteux          #+#    #+#             */
/*   Updated: 2024/10/23 18:28:27 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALS_HPP
# define WRONGANIMALS_HPP

#include <iostream>
#include "Brain.hpp"

class WrongAnimal {
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &wronganimal);
        WrongAnimal &operator=(const WrongAnimal &other);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};

class WrongDog : public WrongAnimal {
    public:
        WrongDog();
        WrongDog(std::string type);
        WrongDog(const WrongDog &wrongdog );
        WrongDog &operator=(const WrongDog &other);
        ~WrongDog();
        void makeSound() const;
};

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(const WrongCat &wrongcat);
        WrongCat &operator=(const WrongCat &other);
        ~WrongCat();
        void makeSound() const;
};

#endif