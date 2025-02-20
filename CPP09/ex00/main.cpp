/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:50:34 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/20 16:59:29 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

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

int main(int ac, char **av) {

    if (ac != 2) {
        std::cout << "Usage: ./btc [input.txt]" << std::endl;
        return 1;
    }
    
    std::ifstream datafile;
    datafile.open(av[1]);

    std::string buffer;
    std::string date;
    std::string value;
    double mult_val;
    try {
        Bitcoin b;
        std::map<std::string, double> btc = b.getBtc();
        std::map<std::string, double>::iterator it;
        std::getline(datafile, buffer);
        while (std::getline(datafile, buffer)) {
            if (buffer.size() < 12) {
                std::cerr << "Error: bad input => " << buffer << std::endl;
            }
            else {
                date = buffer.substr(0, 10);
                if (check_time(date)) {
                    value = buffer.substr(13);
                    if (check_value(value)) {
                        if (btc.find(date) == btc.end()) {
                            it = btc.lower_bound(date);
                            mult_val = (it->second * stringToDouble(value));
                        }
                        else {
                            mult_val = (btc[date] * stringToDouble(value));
                        }
                        std::cout << date << " => " << value << " = " << mult_val << std::endl;
                    }
                }
                else {
                    std::cerr << "Error: Invalid date format" << std::endl;
                }
            }
        }
    } catch (std::invalid_argument &e) {    
        std::cerr << "Error: file not found." << std::endl;
        return 1;
    }   
}
