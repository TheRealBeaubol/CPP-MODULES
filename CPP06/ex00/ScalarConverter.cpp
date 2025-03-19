/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:09:25 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/26 21:38:56 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool is_char(const std::string &literal) {
    return (literal.size() == 1 && !std::isdigit(literal[0]));
}

bool is_int(const std::string &literal) {
    if (literal.empty()) return false;

    size_t i = 0;
    if (literal[i] == '+' || literal[i] == '-')
        i++;
    if (i == literal.size())
        return false;
    while (i < literal.size()) {
        if (!std::isdigit(literal[i]))
            return false;
        i++;
    }
    long long val = std::atoll(literal.c_str());
    return (val >= std::numeric_limits<int>::min() && val <= std::numeric_limits<int>::max());
}

bool is_float(const std::string &literal) {
    if (literal == "+inff" || literal == "-inff" || literal == "nanf")
        return true;
    size_t len = literal.length();
    if (len < 2 || literal[len - 1] != 'f')
        return false;
    std::string num_part = literal.substr(0, len - 1);
    char *endptr;
    std::strtof(num_part.c_str(), &endptr);
    return (*endptr == '\0');
}

bool is_double(const std::string &literal) {
    if (literal == "+inf" || literal == "-inf" || literal == "nan")
        return true;
    char *endptr;
    std::strtod(literal.c_str(), &endptr);
    return (*endptr == '\0');
}

void convertChar(const std::string &literal) {
    char c = literal[0];
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void convertInt(const std::string &literal) {
    int value = std::atoi(literal.c_str());
    if (value >= 0 && value <= 127) {
        if (std::isprint(value))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    } else
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << value << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void convertFloat(const std::string &literal) {
    float value = std::strtof(literal.c_str(), NULL);
    if (value == std::numeric_limits<float>::infinity() || value == -std::numeric_limits<float>::infinity() || std::isnan(value) || (value < 0 || value > 127)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else {
        if (std::isprint(static_cast<char>(value)))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void convertDouble(const std::string &literal) {
    double value = std::strtod(literal.c_str(), NULL);
    if (value == std::numeric_limits<double>::infinity() || value == -std::numeric_limits<double>::infinity() || std::isnan(value) || (value < 0 || value > 127)) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }
    else {
        if (std::isprint(static_cast<char>(value)))
            std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "double: " << value << std::endl;
}

void ScalarConverter::convert(const std::string &literal) {
    if (is_char(literal)) {
        convertChar(literal);
        return;
    }
    if (is_int(literal)) {
        convertInt(literal);
        return;
    }
    if (is_float(literal)) {
        convertFloat(literal);
        return;
    }
    if (is_double(literal)) {
        convertDouble(literal);
        return;
    }
    std::cout << "Impossible convesion" << std::endl;
}
