#include "DiamondTrap.hpp"

int main() {
    DiamondTrap diamond("DiamondTrap");

    diamond.attack("Target1");
    diamond.takeDamage(20);
    diamond.beRepaired(10);
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.whoAmI();

    return 0;
}