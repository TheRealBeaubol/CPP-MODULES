#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(Cure const &cure);
        Cure &operator=(Cure const &other);
        virtual ~Cure();
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif