#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class ICharacter;

class AMateria {
    protected:
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria &amateria);
        AMateria &operator=(const AMateria &other);
        virtual ~AMateria();

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif