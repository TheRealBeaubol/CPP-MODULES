#ifndef CAT_HPP
# define CAT_HPP

# include "Animals.hpp"
# include "Brain.hpp"

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