/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:26:08 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/27 18:14:41 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    int tab[] = {0, 1, 2, 3, 4};
    char tab2[] = {'a', 'b', 'c', 'd', 'e'};
    std::string tab3[] = {"Hello", "World", "42", "Paris", "France"};
    double tab4[] = {0.1, 1.1, 2.1, 3.1, 4.1};
    int *tab5 = NULL;

    std::cout << "\033[1;32m" << "--- Test with int tab ---" << "\033[0m" << std::endl;
    iter(tab, 5, print_element<int>);

    std::cout << "\033[1;32m" << "-----------------------------" << "\033[0m" << std::endl;
    std::cout << std::endl << "\033[1;32m" << "--- Test with char tab ---" << "\033[0m" << std::endl;
    iter(tab2, 5, print_element<char>);

    std::cout << "\033[1;32m" << "-----------------------------" << "\033[0m" << std::endl;
    std::cout << std::endl << "\033[1;32m" << "--- Test with string tab ---" << "\033[0m" << std::endl;
    iter(tab3, 5, print_element<std::string>);

    std::cout << "\033[1;32m" << "-----------------------------" << "\033[0m" << std::endl;
    std::cout << std::endl << "\033[1;32m" << "--- Test with double tab ---" << "\033[0m" << std::endl;
    iter(tab4, 5, print_element<double>);

    std::cout << "\033[1;32m" << "-----------------------------" << "\033[0m" << std::endl;
    std::cout << std::endl << "\033[1;32m" << "--- Test with empty tab ---" << "\033[0m" << std::endl;
    iter(tab5, 0, print_element<int>);

    std::cout << "\033[1;32m" << "-----------------------------" << "\033[0m" << std::endl;
    return 0;
}