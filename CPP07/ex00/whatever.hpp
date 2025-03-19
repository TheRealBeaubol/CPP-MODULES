/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:26:21 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/08 15:50:48 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename SWAP>
void    swap(SWAP &a, SWAP &b) {
    SWAP c = a;
    a = b;
    b = c;
}

template <typename MIN>
MIN     min(MIN &a, MIN &b) {
    return (b <= a ? b : a);
}

template <typename MAX>
MAX     max(MAX &a, MAX &b) {
    return (b >= a ? b : a);
}

#endif