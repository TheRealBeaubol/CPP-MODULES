/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:09:33 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/25 21:22:40 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <limits>
# include <cmath>
# include <iomanip>

class ScalarConverter {
    private:
        ScalarConverter() {};
        ScalarConverter(const ScalarConverter &scalarConverter) {
            (void)scalarConverter;
        };
        ScalarConverter &operator=(const ScalarConverter &other) {
            (void)other;
            return (*this);
        };
        ~ScalarConverter() {};
    public:
        static void convert(const std::string &literal);
};

#endif