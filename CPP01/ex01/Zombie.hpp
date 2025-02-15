#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    private:
        std::string Name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif