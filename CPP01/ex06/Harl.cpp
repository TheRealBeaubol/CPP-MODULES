#include "Harl.hpp"

Harl::Harl(void) {
}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(int level) {
    void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    if (level < 0)
        return ;
    (this->*functions[level])();
}

void Harl::filter(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int cpt = -1;
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            cpt = i;
            break;
        }
    }
    switch (cpt) {
        case 0:
            this->complain(0);
            __attribute__((fallthrough));
        case 1:
            this->complain(1);
            __attribute__((fallthrough));
        case 2:
            this->complain(2);
            __attribute__((fallthrough));
        case 3:
            this->complain(3);
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}
