/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:50:35 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/20 16:23:30 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::Bitcoin() {
    _btc = read_data();
}

Bitcoin::Bitcoin(const Bitcoin &bitcoin) {
    _btc = bitcoin._btc;
}

Bitcoin &Bitcoin::operator=(const Bitcoin &other) {
    if (this == &other) {    
        _btc = other._btc;
    }
    return *this;
}

Bitcoin::~Bitcoin() {}

std::map<std::string, double> Bitcoin::read_data() {
    std::string buffer;
    std::ifstream datafile;
    std::map<std::string, double> btc;
    datafile.open("data.csv");
    if (datafile) {
        std::getline(datafile, buffer);
        while (std::getline(datafile, buffer)) {
            btc.insert(std::pair<std::string, double>(buffer.substr(0, 10), stringToDouble(buffer.substr(11))));
        }
        return btc;
    }
    else {
        throw std::invalid_argument("Error: file not found.");
    }
}

std::map<std::string, double> Bitcoin::getBtc() {
    return _btc;
}

double stringToDouble(std::string str) {
    std::stringstream ss(str);
    double nb;
    ss >> nb;
    return nb;
}