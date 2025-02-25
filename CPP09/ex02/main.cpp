/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:41:54 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/25 21:35:11 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac < 2) {
        std::cerr << "Usage: ./PmergeMe [value1] [value2]..." << std::endl;
        return 1;
    }
    std::vector<int> v;
    int value;
    for (int i = 1; i < ac; i++) {
        if (isNumber(av[i], value)) {
            v.push_back(value);
        } else {
            std::cerr << "Error: " << av[i] << " is not a number" << std::endl;
            return 1;
        }
    }
    std::deque<int> d(v.begin(), v.end());
    printStack(v, "Before:   ");
    sortFordJohnsonVector(v);
    printStack(v, "After:    ");
    printStack(d, "Before:   ");
    printStack(d, "After:    ");
}