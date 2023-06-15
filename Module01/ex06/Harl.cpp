#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void    Harl::debug(void) {
    std::cout << "[ debug ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger." << std::endl;
    std::cout << "I really do!" << std::endl << std::endl;
}

void    Harl::info(void) {
    std::cout << "[ info ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void    Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::error(void) {
    std::cout << "[ error ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void    Harl::complain(std::string level) {
    std::string funcStringList[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    for (i = 0; i < 4; i++)
    {
        if (level == funcStringList[i])
            break ;
    }
    switch (i) {
    case 0:
        this->debug();
        /*fall through*/
    case 1:
        this->info();
         /*fall through*/
    case 2:
        this->warning();
         /*fall through*/
    case 3:
        this->error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}