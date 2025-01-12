/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:09:33 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/06 19:22:16 by lboiteux         ###   ########.fr       */
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
        ScalarConverter();
        ~ScalarConverter();
    public:
        static void convert(const std::string &literal);
        class ImpossibleConversionException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
        class NonDisplayableException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif