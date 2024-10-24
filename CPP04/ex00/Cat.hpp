#ifndef CAT_HPP
# define CAT_HPP

#include "Animals.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat &cat);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
};

#endif