#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(Ice const &ice);
        Ice &operator=(Ice const &other);
        virtual ~Ice();
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif