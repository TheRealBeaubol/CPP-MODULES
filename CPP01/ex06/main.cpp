#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "ERROR ! Usage : ./harlFilter [DEBUG/INFO/WARNING/ERROR]" << std::endl;
        return 1;
    }
    Harl harl;
    harl.filter(av[1]);
    return 0;
}