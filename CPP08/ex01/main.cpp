/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:00:33 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/10 21:14:28 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    std::cout << "\033[1;33m=== Testing Span Class ===\033[0m\n" << std::endl;
    try {
        std::cout << "\033[1;36m[TEST 1: Basic Span]\033[0m" << std::endl;
        Span span(5);
        std::vector<int> vec;
        for (int i = 0; i < 5; i++) {
            vec.push_back(i);
        }
        span.addMultipleNumber(vec.begin(), vec.end());
        std::cout << "Shortest span: \033[1;32m" << span.shortestSpan() << "\033[0m" << std::endl;
        std::cout << "Longest span: \033[1;32m" << span.longestSpan() << "\033[0m" << std::endl;
    } catch (std::exception &e) {
        std::cout << "\033[1;31mError:\033[0m " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << "\033[1;36m[TEST 2: Exceed Capacity]\033[0m" << std::endl;
        Span span(2);
        std::vector<int> vec;
        for (int i = 0; i < 3; i++) {
            vec.push_back(i);
        }
        span.addMultipleNumber(vec.begin(), vec.end());
    } catch (std::exception &e) {
        std::cout << "\033[1;31mError:\033[0m " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << "\033[1;36m[TEST 3: Not Enough Numbers]\033[0m" << std::endl;
        Span span(3);
        span.addNumber(42);
        std::cout << "Shortest span: \033[1;32m" << span.shortestSpan() << "\033[0m" << std::endl;
    } catch (std::exception &e) {
        std::cout << "\033[1;31mError:\033[0m " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try {
        std::cout << "\033[1;36m[TEST 4: Large Span]\033[0m" << std::endl;
        Span span(10000);
        std::vector<int> vec;
        srand(time(NULL));
        for (int i = 0; i < 10000; i++) {
            vec.push_back(rand() % 10000);
        }
        span.addMultipleNumber(vec.begin(), vec.end());
        std::cout << "Shortest span: \033[1;32m" << span.shortestSpan() << "\033[0m" << std::endl;
        std::cout << "Longest span: \033[1;32m" << span.longestSpan() << "\033[0m" << std::endl;
    } catch (std::exception &e) {
        std::cout << "\033[1;31mError:\033[0m " << e.what() << std::endl;
    }

    return 0;
}
