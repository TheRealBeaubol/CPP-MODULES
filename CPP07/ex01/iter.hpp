/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:47:57 by lboiteux          #+#    #+#             */
/*   Updated: 2024/12/11 17:11:44 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    print_element(T &value) {
    static int i = 1;
    std::cout << "\033[1;36mTab value " << i++ << " : \033[0;36m" << value << "\033[0m" << std::endl;
}

template <typename TAB, typename FUNC>
void    iter(TAB *array, int length, FUNC func) {
    if (!array || !func)
        return ;
    for (int i = 0; i < length; ++i) {
        func(array[i]);
    }
}

#endif