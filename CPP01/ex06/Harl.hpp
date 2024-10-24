#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class   Harl {
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl(void);
        void complain(int level);
        void filter(std::string level);
};

#endif