/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:50:36 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/20 16:10:29 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <vector>
# include <ctime>
# include <map>
# include <iomanip>

class Bitcoin {
    private:
        std::map<std::string, double> _btc;
    public:
        Bitcoin();
        Bitcoin(const Bitcoin &bitcoin);
        Bitcoin &operator=(const Bitcoin &other);
        ~Bitcoin();
        void read_input();
        std::map<std::string, double> getBtc();
        std::map<std::string, double> read_data();
};

double stringToDouble(std::string str);
#endif