/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboiteux <lboiteux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:01:23 by lboiteux          #+#    #+#             */
/*   Updated: 2025/03/10 21:13:26 by lboiteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <cstdlib>
# include <ctime>
# include <vector>
# include <climits>
# include <cstddef>

class Span {
    private:
        unsigned int _n;
        unsigned int _size;
        std::vector<int> _data;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        ~Span();
        Span &operator=(const Span &other);
        void addNumber(int n);
        void addMultipleNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        class ExceedCapacityException : public std::exception {
            public:
                virtual const char *what() const throw() {
                    return "\033[1;31mExceed capacity";
                };
        };
        class NoSpanFound : public std::exception {
            public:
                virtual const char *what() const throw() {
                    return "\033[1;31mNo span found";
                };
        };
};

#endif