#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>

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

#endif