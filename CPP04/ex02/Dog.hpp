#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimals.hpp"
# include "Brain.hpp"

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

#endif