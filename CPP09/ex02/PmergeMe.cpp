/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:42:26 by lboiteux          #+#    #+#             */
/*   Updated: 2025/02/25 21:35:46 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool isNumber(std::string const &s, int &num) {
    std::istringstream ss(s);
    ss >> num;
    return !ss.fail() && ss.eof();
}

void sortFordJohnsonVector(std::vector<int> &v) {
    if (v.size() <= 1)
        return;
    std::vector<std::pair<int, int> > pairs;
    std::vector<int> mainChain;
    std::vector<int> pendingChain;
    for (size_t i = 0; i + 1 < v.size(); i += 2) {
        if (v[i] > v[i + 1]) {
            std::swap(v[i], v[i + 1]);
        }
        pairs.push_back(std::make_pair(v[i], v[i + 1]));
    }
    if (v.size() % 2 == 1) {
        pendingChain.push_back(v.back());
    }
    for (size_t i = 0; i < pairs.size(); i++) {
        mainChain.push_back(pairs[i].second);
    }
    std::sort(mainChain.begin(), mainChain.end());
    for (size_t i = 0; i < pairs.size(); i++)
        pendingChain.push_back(pairs[i].first);
    for (size_t i = 0; i < pendingChain.size(); i++) {
        std::vector<int>::iterator it = std::lower_bound(mainChain.begin(), mainChain.end(), pendingChain[i]);
        mainChain.insert(it, pendingChain[i]);
    }
    v = mainChain;
}

void sortFordJohnsonDeque(std::deque<int> &d) {
    if (d.size() <= 1)
        return;
}

