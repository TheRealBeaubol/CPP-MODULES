#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimals.hpp"
# include "Brain.hpp"

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