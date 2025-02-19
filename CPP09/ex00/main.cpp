/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:50:34 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/19 20:09:34 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double stringToDouble(std::string str) {
    std::stringstream ss(str);
    double nb;
    ss >> nb;
    return nb;
}

bool check_time(std::string time) {
    std::tm tm = {};
    tm.tm_year = stringToDouble(time.substr(0, 4)) - 1900;
    tm.tm_mon = stringToDouble(time.substr(5, 2)) - 1;
    tm.tm_mday = stringToDouble(time.substr(8, 2));
    std::time_t t = std::mktime(&tm);
    return t != -1;  
}

bool check_value(std::string value) {
    double val = stringToDouble(value);
    if (val < 0) {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    if (val > 1000) {
        std::cerr << "Error: too large number." << std::endl;
        return false;
    }
    return true;
}

std::map<std::string, double> read_input(std::ifstream &datafile) {
    std::string buffer;
    std::map<std::string, double> btc;
    std::getline(datafile, buffer);
    while (std::getline(datafile, buffer)) {
        if (buffer.size() < 12) {
            std::cerr << "Error: Invalid line format" << std::endl;
        }
        else {
            if (check_time(buffer.substr(0, 10))) {
                if (check_value(buffer.substr(13))) {
                    btc.insert(std::pair<std::string, double>(buffer.substr(0, 10), stringToDouble(buffer.substr(13))));
                }
            }
            else {
                std::cerr << "Error: Invalid date format" << std::endl;
            }
        }
    }
    return btc;
}

void print_map(std::map<std::string, double> btc) {
    for (std::map<std::string, double>::iterator it = btc.begin(); it != btc.end(); it++) {
        std::cout << it->first << " " << it->second << std::endl;
    }
}

void read_data(std::map<std::string, double> &btc) {
    std::string buffer;
    std::ifstream datafile;
    datafile.open("data.csv");
    std::getline(datafile, buffer);
    (void)btc;
}

int main(int ac, char **av) {

    if (ac != 2) {
        std::cout << "Usage: ./btc [input.txt]" << std::endl;
        return 1;
    }
        
    std::string buffer;
    std::ifstream datafile;
    datafile.open(av[1]);

    std::map<std::string, double> btc;
    btc = read_input(datafile);
    read_data(btc);
    print_map(btc);
}
