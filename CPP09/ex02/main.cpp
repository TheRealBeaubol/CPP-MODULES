/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:41:54 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/19 16:54:11 by lboiteux         ###   ########.fr       */
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
    
    struct timespec vStart;
    struct timespec vEnd;
    struct timespec dStart;
    struct timespec dEnd;

    clock_gettime(CLOCK_MONOTONIC, &vStart);
    fordJohnsonSortVector(v);
    clock_gettime(CLOCK_MONOTONIC, &vEnd);

    clock_gettime(CLOCK_MONOTONIC, &dStart);    
    fordJohnsonSortDeque(d);
    clock_gettime(CLOCK_MONOTONIC, &dEnd);

    printStack(v, "After:    ");
    std::cout <<  "Time to process a range of   " << v.size() << " elements with a std::vector   : " << std::fixed << std::setprecision(5) << (vEnd.tv_sec - vStart.tv_sec) * 1e6 + (vEnd.tv_nsec - vStart.tv_nsec) / 1e3 << " us" << std::endl;
    std::cout <<  "Time to process a range of   " << d.size() << " elements with a std::deque     : " << std::fixed << std::setprecision(5) << (dEnd.tv_sec - dStart.tv_sec) * 1e6 + (dEnd.tv_nsec - dStart.tv_nsec) / 1e3 << " us" << std::endl;
}