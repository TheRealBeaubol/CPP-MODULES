/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:26:08 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/08 15:51:38 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RESET   "\033[0m"
#define ORANGE  "\033[33m"
#define CYAN    "\033[36m"

#include "whatever.hpp"

int main() {
    int a = 2025, b = -42;
    std::cout << CYAN << "Before swap: a = " << a << ", b = " << b << RESET << std::endl;
    swap(a, b);
    std::cout << CYAN << "after swap: a = " << a << ", b = " << b << RESET << std::endl;
    std::cout << ORANGE << "Min(" << a << ", " << b << ") = " << min(a, b) << RESET << std::endl;
    std::cout << ORANGE << "Max(" << a << ", " << b << ") = " << max(a, b) << RESET << "\n" << std::endl;

    float float1 = 3.14686f, float2 = 1.854f;
    std::cout << CYAN << "Before swap: float1 = " << float1 << ", float2 = " << float2 << RESET << std::endl;
    swap(float1, float2);
    std::cout << CYAN << "after swap: float1 = " << float1 << ", float2 = " << float2 << RESET << std::endl;
    std::cout << ORANGE << "Min(float1, float2) = " << min(float1, float2) << RESET << std::endl;
    std::cout << ORANGE << "Max(float1, float2) = " << max(float1, float2) << RESET << "\n" << std::endl;

    char c1 = '@', c2 = '#';
    std::cout << CYAN << "Before swap: c1 = " << c1 << ", c2 = " << c2 << RESET << std::endl;
    swap(c1, c2);
    std::cout << CYAN << "after swap: c1 = " << c1 << ", c2 = " << c2 << RESET << std::endl;
    std::cout << ORANGE << "Min('@', '#') = " << min(c1, c2) << RESET << std::endl;
    std::cout << ORANGE << "Max('@', '#') = " << max(c1, c2) << RESET << "\n" << std::endl;

    std::string s1 = "string 1", s2 = "string 2";
    std::cout << CYAN << "Before swap: s1 = " << s1 << ", s2 = " << s2 << RESET << std::endl;
    swap(s1, s2);
    std::cout << CYAN << "after swap: s1 = " << s1 << ", s2 = " << s2 << RESET << std::endl;
    std::cout << ORANGE << "Min(string 1, string 2) = " << min(s1, s2) << RESET << std::endl;
    std::cout << ORANGE << "Max(string 1, string 2) = " << max(s1, s2) << RESET << "\n" << std::endl;

    bool b1 = true, b2 = false;
    std::cout << CYAN << "Before swap: b1 = " << b1 << ", b2 = " << b2 << RESET << std::endl;
    swap(b1, b2);
    std::cout << CYAN << "after swap: b1 = " << b1 << ", b2 = " << b2 << RESET << std::endl;
    std::cout << ORANGE << "Min(true, false) = " << min(b1, b2) << RESET << std::endl;
    std::cout << ORANGE << "Max(true, false) = " << max(b1, b2) << RESET << "\n" << std::endl;

    return 0;
}
