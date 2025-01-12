/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:09:25 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/06 19:23:22 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

const char *ScalarConverter::ImpossibleConversionException::what() const throw() {
    return "Impossible conversion";
}

const char *ScalarConverter::NonDisplayableException::what() const throw() {
    return "Non displayable";
}

void ScalarConverter::convert(const std::string &literal) {
    double value = std::strtod(literal.c_str(), NULL);

    try {
        if (value >= 0 && value <= 127 && std::floor(value) == value) {
            char c = static_cast<char>(value);
            if (std::isprint(c))
                std::cout << "char: '" << c << "'" << std::endl;
            else
                throw ScalarConverter::NonDisplayableException();
        } else
            throw ScalarConverter::ImpossibleConversionException();
        
    } catch (const ScalarConverter::ImpossibleConversionException &e) {
        std::cout << "char: impossible" << std::endl;
    } catch (const ScalarConverter::NonDisplayableException &e) {
            std::cout << "char: Non displayable" << std::endl;
    }
    try {
        if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max() && std::floor(value) == value)
            std::cout << "int: " << static_cast<int>(value) << std::endl;
        else
            throw ScalarConverter::ImpossibleConversionException();
    } catch (const ScalarConverter::ImpossibleConversionException &e) {
        std::cout << "int: impossible" << std::endl;
    }
    try {
        if (std::isinf(value))
            std::cout << "float: " << (value < 0 ? "-" : "+") << "inff" << std::endl;
        else if (std::isnan(value))
            std::cout << "float: nanf" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
    } catch (...) {   
    }
    try {
        if (std::isinf(value))
            std::cout << "double: " << (value < 0 ? "-" : "+") << "inf" << std::endl;
        else if (std::isnan(value))
            std::cout << "double: nan" << std::endl;
        else
            std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
    } catch (...) {
    }
}