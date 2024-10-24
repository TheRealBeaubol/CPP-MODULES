#ifndef DOG_H
# define DOG_H

#include "Animals.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog &dog);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
};

#endif