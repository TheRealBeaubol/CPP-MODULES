#include "ClapTrap.hpp"

int main() {
    // Constructors Tests
    ClapTrap claptrap1("Good");
    ClapTrap claptrap2("Bad");

    // Attack and damage Tests
    claptrap1.attack("Bad");
    claptrap2.takeDamage(5);
    
    // Repair Tests
    claptrap2.beRepaired(3);
    
    // Claptrap1 attack until out of energy
    for (int i = 0; i < 10; ++i) {
        claptrap1.attack("Bad");
    }

    // Claptrap2 take damage until dead
    claptrap2.takeDamage(10);

    // Repair test withouth energy
    claptrap1.beRepaired(2);

    // Attack and repair test with a dead Claptrap
    claptrap2.attack("Good");
    claptrap2.beRepaired(5);

    // Destructor Tests
    return 0;
}