#include "Zombie.hpp"

int    main(){
    randomChump("Zombie 1");
    Zombie *zombie = newZombie("Zombie 2");
    zombie->announce();
    delete zombie;
    return 0;
}