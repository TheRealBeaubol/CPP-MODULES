/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:40:05 by lboiteux          #+#    #+#             */
/*   Updated: 2025/01/21 17:49:04 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <algorithm>


class NotFoundException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return "Element not found";
    };
};

template <typename T>
int easyfind(T &container, int n) {
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFoundException();
    return *it;  
}

#endif