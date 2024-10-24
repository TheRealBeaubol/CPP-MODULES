#include "Zombie.hpp"

int    main(){
    Zombie *horde = zombieHorde(8, "Zombie");
    for (int i = 0; i < 8; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}