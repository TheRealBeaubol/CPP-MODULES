/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:31:49 by lboiteux          #+#    #+#             */
/*   Updated: 2025/01/22 16:47:34 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>{
    public:
        MutantStack();
        MutantStack(const MutantStack<T>& other);
        MutantStack<T>& operator=(const MutantStack<T>& other);
        ~MutantStack();
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        iterator begin();
        iterator end();
        const_iterator cbegin() const;
        const_iterator cend() const;
};

# include "MutantStack.tpp"

#endif
