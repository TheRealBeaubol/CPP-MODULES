/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:42:26 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/26 19:27:15 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isNumber(std::string const &s, int &num) {
    std::istringstream ss(s);
    ss >> num;
    return !ss.fail() && ss.eof();
}

void mergeInsertionSortVector(std::vector<int> &v) {
    if (v.size() <= 1)
        return;
    std::vector<int> small, large;
    for (size_t i = 0; i < v.size() - 1; i += 2) {
        if (v[i] < v[i + 1]) {
            small.push_back(v[i]);
            large.push_back(v[i + 1]);
        } else {
            small.push_back(v[i + 1]);
            large.push_back(v[i]);
        }
    }
    if (v.size() % 2 == 1)
        large.push_back(v[v.size() - 1]);
    mergeInsertionSortVector(large);
    for (size_t i = 0; i < small.size(); i++) {
        int val = small[i];
        std::vector<int>::iterator it = std::lower_bound(large.begin(), large.end(), val);
        large.insert(it, val);
    }
    v = large;
}

void mergeInsertionSortDeque(std::deque<int> &d) {
    if (d.size() <= 1)
        return;
    std::deque<int> small, large;
    for (size_t i = 0; i < d.size() - 1; i += 2) {
        if (d[i] < d[i + 1]) {
            small.push_back(d[i]);
            large.push_back(d[i + 1]);
        } else {
            small.push_back(d[i + 1]);
            large.push_back(d[i]);
        }
    }
    if (d.size() % 2 == 1)
        large.push_back(d[d.size() - 1]);
    mergeInsertionSortDeque(large);
    for (size_t i = 0; i < small.size(); i++) {
        int val = small[i];
        std::deque<int>::iterator it = std::lower_bound(large.begin(), large.end(), val);
        large.insert(it, val);
    }
    d = large;
}
