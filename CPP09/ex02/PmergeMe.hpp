/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:42:39 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/25 21:28:28 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <sstream>
# include <algorithm>

void sortFordJohnsonVector(std::vector<int> &v);
void sortFordJohnsonDeque(std::deque<int> &d);
bool isNumber(std::string const &s, int &num);

template <typename T>
void printStack(T &a, std::string const &msg) {
    std::cout << msg;
    for (size_t i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

#endif