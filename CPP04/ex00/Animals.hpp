#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>

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

#endif